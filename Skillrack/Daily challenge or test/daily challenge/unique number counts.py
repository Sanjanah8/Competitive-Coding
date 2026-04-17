n,r1,r2=map(int,input().split())
arr=lits(map(int,input().split()))
print(len(set(num for num in arr if r1<=num<=r2)))
