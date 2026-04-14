n = int(input())
for _ in range(n):
    res = ""
    for char in input().strip():
        if char == '^':
            res = res[:-1]
        else:
            res += char
    print(res if res else "-1")
