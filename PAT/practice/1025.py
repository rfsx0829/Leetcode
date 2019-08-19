import sys

for line in sys.stdin:
    if not line: break
    a, b, c = sorted(map(int, line.split()))
    print("Yes" if a+b>c else "No")
