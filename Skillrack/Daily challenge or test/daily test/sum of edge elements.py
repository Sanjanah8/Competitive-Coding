r,c=map(int,input().split())
matrix=[list(map(int,input().split()))for _ in range(r)]
s=0
for j in range(c):
    s+=matrix[0][j]
for j in range(c):
    s+=matrix[r-1][j]
for i in range(1,r-1):
    s+=matrix[i][0]
for i in range(1,r-1):
    s+=matrix[i][c-1]
print(s)
