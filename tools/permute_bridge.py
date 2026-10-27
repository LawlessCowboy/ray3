#!/usr/bin/env python3
"""Persistent compile bridge for decomp-permuter jobs.

Every permuter iteration runs the job's compile.sh.  Starting `permute.py
compile` each time re-imports the matcher and re-parses the retail ELF and the
source index, which costs about 0.4 s of a ~0.5 s iteration; the compile itself
is ~0.1 s.  This bridge keeps those loaded in one long-lived server:

    python3 tools/permute_bridge.py serve [--socket PATH]   # leave running

A job's compile.sh (written by `permute.py prepare`) calls the client
(`permute_bridge.py compile JOB INPUT -o OUTPUT`), which uses the server when
one is listening and otherwise falls back to `permute.py compile`, so nothing
needs the server.  Measured on the permuter: about 4.8x more iterations per
second at -j3, with byte-identical objects.

The socket defaults to $PERMUTE_BRIDGE_SOCKET, then build/permuter/bridge.sock.
Run one server per concurrent permuter run (a server handles a few jobs at a
time, but the Python half of each compile is serialised by the GIL).

Protocol: one JSON line in {"job","input","output"}, one JSON line out
{"rc","err"}.
"""

from __future__ import annotations

import argparse
import json
import os
import socket
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
DEFAULT_SOCKET = ROOT / 'build' / 'permuter' / 'bridge.sock'


def socket_path(explicit: str | None = None) -> str:
    return explicit or os.environ.get('PERMUTE_BRIDGE_SOCKET') or str(DEFAULT_SOCKET)


def client(job: str, source: str, output: str, sock_path: str | None = None) -> int:
    """Compile through the server, or through `permute.py compile` without one."""
    request = json.dumps({'job': os.path.abspath(job), 'input': os.path.abspath(source),
                          'output': os.path.abspath(output)}) + '\n'
    connection = socket.socket(socket.AF_UNIX)
    try:
        connection.connect(socket_path(sock_path))
    except OSError:
        connection.close()
        return subprocess.call([sys.executable, str(ROOT / 'tools' / 'permute.py'), 'compile',
                                job, source, '-o', output])
    with connection:
        connection.sendall(request.encode())
        buffer = b''
        while not buffer.endswith(b'\n'):
            chunk = connection.recv(65536)
            if not chunk:
                break
            buffer += chunk
    reply = json.loads(buffer)
    if reply['err']:
        sys.stderr.write(reply['err'] + '\n')
    return reply['rc']


def serve(sock_path: str) -> None:
    import socketserver
    import traceback

    sys.path.insert(0, str(ROOT / 'tools'))
    import permute  # loads the matcher once for every request

    class Handler(socketserver.StreamRequestHandler):
        def handle(self) -> None:
            try:
                request = json.loads(self.rfile.readline())
                rc, err = permute.compile_candidate(request['job'], request['input'], request['output'])
            except Exception:
                rc, err = 1, traceback.format_exc()[-600:]
            self.wfile.write((json.dumps({'rc': rc, 'err': err}) + '\n').encode())

    class Server(socketserver.ThreadingMixIn, socketserver.UnixStreamServer):
        daemon_threads = True
        request_queue_size = 64

    Path(sock_path).parent.mkdir(parents=True, exist_ok=True)
    if os.path.exists(sock_path):
        os.unlink(sock_path)
    server = Server(sock_path, Handler)
    print(f'permute bridge listening on {sock_path}', flush=True)
    try:
        server.serve_forever()
    finally:
        server.server_close()
        if os.path.exists(sock_path):
            os.unlink(sock_path)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = parser.add_subparsers(dest='command', required=True)
    serve_parser = sub.add_parser('serve', help='run the compile server')
    serve_parser.add_argument('--socket', help='unix socket path')
    compile_parser = sub.add_parser('compile', help='client used by a job\'s compile.sh')
    compile_parser.add_argument('job')
    compile_parser.add_argument('input')
    compile_parser.add_argument('-o', '--output', required=True)
    compile_parser.add_argument('--socket', help='unix socket path')
    args = parser.parse_args()
    if args.command == 'serve':
        serve(socket_path(args.socket))
        return 0
    return client(args.job, args.input, args.output, args.socket)


if __name__ == '__main__':
    raise SystemExit(main())
