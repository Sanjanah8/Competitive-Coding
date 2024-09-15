1)
numList = [int(val) for val in input().split()]
x = int(input())
print("yes" if x in numList else "no")

2)
numList = [int(val) for val in input().split()]
x = int(input())
if x in numList:
    print("yes")
else:
    print("no")
