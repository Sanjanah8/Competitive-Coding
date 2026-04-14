import sys
import heapq

data = sys.stdin.read().split()
if not data:
    exit()

n = int(data[0])
arr = list(map(int, data[1:-1]))
k = int(data[-1])

print(*(heapq.nsmallest(k, arr)))
