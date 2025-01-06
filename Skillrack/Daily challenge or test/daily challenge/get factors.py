def getfactorscount(num):
    count=0
    for ctr in range(1,num+1):
        if num%ctr==0:
            count+=1
    return count
n=int(input())
arr=list(map(int,input().split()))
maxnum=max(arr,key=getfactorscount)
print(maxnum,getfactorscount(maxnum))
