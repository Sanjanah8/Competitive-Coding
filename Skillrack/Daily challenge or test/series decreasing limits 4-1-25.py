n=int(input())
start,end=n,1
while start>=end:
    print(*list(range(start,end-1,-1)),end= " ")
    start-=1
    end+=1
