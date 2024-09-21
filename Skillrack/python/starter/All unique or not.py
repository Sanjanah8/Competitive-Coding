1) numList = [int(val) for val in input().split()]
print("YES" if len(numList) == len(set(numList)) else "NO")

2)numList = list(map(int, input().split()))
if len(numList) == len(set(numList)):
    print("YES")
else:
    print("NO")

