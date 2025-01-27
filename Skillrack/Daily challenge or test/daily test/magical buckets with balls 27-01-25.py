def fill():
    r,c=map(int,input().split())
    buckets=[]
    for _ in range(r):
        buckets.append(list(map(int,input().split())))
    m=int(input())
    seconds=0
    while True:
        filled=True
        overflow=[0]*c
        for i in range(r):
            newoverflow=[0]*c
            for j in range(c):
                buckets[i][j]+=overflow[j]
                if i==0:
                    buckets[i][j]+=1
                if buckets[i][j]>m:
                    excess=buckets[i][j]-m
                    buckets[i][j]=m
                    if i+1<r:
                        newoverflow[j]+=excess*2
                if buckets[i][j]<m:
                    filled=False
            overflow=newoverflow
        seconds+=1
        if filled:
            break
    print(seconds)
fill()
