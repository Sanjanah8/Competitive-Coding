def is_s(n):
    return n % sum(int(d) for d in str(n)) == 0

r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]

for i in range(r - 1):
    for j in range(c - 1):
        s = [m[i][j], m[i][j+1], m[i+1][j], m[i+1][j+1]]
        if all(is_s(x) for x in s):
            print(s[0], s[1])
            print(s[2], s[3])
