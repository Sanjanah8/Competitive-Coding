1) numList = [int(val) for val in input().split()]
for i in range(0, len(numList), 2):
    print(numList[i], end=' ')

2)numList = [int(val) for val in input().split()]
for i in range(len(numList)):
    if i % 2 == 0:
        print(numList[i], end=' ')
      
3)numList = [int(val) for val in input().split()]
for value in numList[::2]:
    print(value, end=' ')

4)numList = [int(val) for val in input().split()]
print(*[numList[i] for i in range(len(numList)) if i % 2 == 0])


