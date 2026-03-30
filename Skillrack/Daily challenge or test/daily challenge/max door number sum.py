s,h=map(int,input().split())
grid=[]
for _ in range(s):
    grid.append(list(map(int,input().split())))
dp=[[0]*h for _ in range(s)]
dp[0][0]=grid[0][0]
for j in range(1,h):
    dp[0][j]=dp[0][j-1]+grid[0][j]
for i in range(1,s):
    dp[i][0]=dp[i-1][0]+grid[i][0]
for i in range(1,s):
    for j in range(1,h):
        dp[i][j]=grid[i][j]+max(dp[i-1][j],dp[i][j-1])
print(dp[s-1][h-1])
