n=int(input())
arr=list(map(int,input().split()))
for num in arr:
    if len(str(abs(num)))%2==0:
        print(num,end=" ")
