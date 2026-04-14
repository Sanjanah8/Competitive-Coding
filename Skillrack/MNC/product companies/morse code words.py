import sys
for line in sys.stdin:
    print("".join(chr(96 + len(w)) for w in line.split()), end=" ")
