n=int(input())
a=[list(map(int,input().split()))for _ in range(n)]
m=[a[i][i]for i in range(n)]
o=[a[i][n-1-i]for i in range(n)]
sm=[0]*n
so=[0]*n
sm[-1]=m[-1]
so[-1]=o[-1]
tm=sm[-1]
to=so[-1]
for i in range(n-2,-1,-1):
    sm[i]=m[i]+sm[i+1]
    so[i]=o[i]+so[i+1]
    tm+=sm[i]
    to+=so[i]
if to>tm:
    print(*so)
    print(*sm)
else:
    print(*sm)
    print(*so)
