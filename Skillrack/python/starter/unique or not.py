numList = list(map(int, input().split()))
if len(numList) == len(set(numList)):
    print('YES')
else:
    print('NO')
