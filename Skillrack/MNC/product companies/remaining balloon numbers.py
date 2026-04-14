n, m = map(int, input().split())
b = list(map(int, input().split()))
j = list(map(int, input().split()))

res = [x for x in b if all(x % k != 0 for k in j)]
print(*(res) if res else [-1])
