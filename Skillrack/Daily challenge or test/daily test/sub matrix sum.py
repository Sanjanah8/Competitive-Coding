s,r,c=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(r)]
first=True
for r1 in range(r):
    for c1 in range(c):
        for r2 in range(r1,r):
            for c2 in range(c1,c):
                sm=0
                for i in range(r1,r2+1):
                    for j in range(c1,c2+1):
                        sm+=mat[i][j]
                if sm==s:
                    if not first:
                        print("END")
                    for i in range(r1,r2+1):
                        print(*mat[i][c1:c2+1])
                    first=False
