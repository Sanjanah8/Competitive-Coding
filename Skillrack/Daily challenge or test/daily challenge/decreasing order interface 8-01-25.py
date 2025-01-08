a,b=map(int,input().split())
for diff in range(0,abs(a-b)):
    print(max(a,b)-diff,min(a,b)-diff,end=" ")
