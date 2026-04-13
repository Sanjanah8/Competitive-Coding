n=int(input())
for i in range(n):
    num=n-i
    pluspart=["+"] * i
    numpart=[str(num)]*num
    print(" ".join(pluspart + numpart))
