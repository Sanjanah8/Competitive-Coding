import sys
d = sys.stdin.read().split()
L = ["MON","TUE","WED","THU","FRI","SAT","SUN"]
print(L[(L.index(d[0]) + int(d[1]) - 1) % 7])
