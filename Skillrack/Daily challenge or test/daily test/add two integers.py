n,k=map(int,input().split())
arr=list(map(int,input().split()))
count=0
for i in range(n):
    for j in range(i+1,n):
        a=arr[i]
        b=arr[j]
        if(a+b==k or a-b==k or -a+b==k or -a-b==k):
            count+=1
print(count)
