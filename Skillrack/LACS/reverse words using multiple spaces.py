import sys

def solve():
    s = sys.stdin.read().strip()
    if not s:
        return
    words = s.split()
    print(" ".join(reversed(words)))

if __name__ == '__main__':
    solve()
