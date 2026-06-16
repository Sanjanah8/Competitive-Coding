
n = int(input())
strings = [input().strip() for _ in range(n)]

strings.sort(key=len)

print("".join(strings))
