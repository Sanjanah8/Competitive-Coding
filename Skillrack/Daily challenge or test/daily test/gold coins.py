import sys
data=[ln.rstrip("\n")for ln in sys.stdin.readlines() if ln.strip()!=""]
r,c=map(int,data[0].split())
g=[list(map(int,data[i+1].split()))for i in range(r)]
s=data[r+1].strip() if len(data)>r+1 else ""
x=0
y=0
total=0
visited=[[False]*c for _ in range(r)]
col_from=[[0]*c for _ in range(r)]
if not visited[0][0]:
    total+=g[0][0]
    col_from[0][0]+=g[0][0]
    g[0][0]=0
    visited[0][0]=True
for ch in s:
    if ch=='N':
        x-=1
    elif ch=='S':
        x+=1
    elif ch=='E':
        y+=1
    elif ch=='W':
        y-=1
    if not visited[x][y]:
        total+=g[x][y]
        col_from[x][y]+=g[x][y]
        g[x][y]=0
        visited[x][y]=True
    else:
        if col_from[x][y]>=1:
            col_from[x][y]-=1
            total-=1
            g[x][y]+=1
print(total)
        
