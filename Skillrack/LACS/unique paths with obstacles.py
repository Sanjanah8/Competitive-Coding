r,c=map(int,input().split())
g=[list(map(int,input().split()))for _ in range(r)]
if g[0][0]==1 or g[r-1][c-1]==1:
    print(0)
    exit()
dp=[0]*c
dp[0]=1
for i in range(r):
    for j in range(c):
        if g[i][j]==1:
            dp[j]=0
        elif j>0:
            dp[j]+=dp[j-1]
print(dp[-1])
