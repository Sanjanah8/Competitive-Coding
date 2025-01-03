n=int(input())
arr=list(map(int,input().split()))
count=0
for ind1 in range(0,n):
    for ind2 in range(ind1+1,n):
        for ind3 in range(ind2+1,n):
            if arr[ind1]>arr[ind2] and arr[ind2]>arr[ind3]:
                count+=1
print(count)
