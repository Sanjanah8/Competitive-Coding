n=int(input())
matrix=[]
for _ in range(n):
    row=input().strip().split()
    if len(row)==1 and len(row[0])==n:
        row=list(row[0])
    matrix.append(row)
for j in range(n):
    if j%2==0:
        top,bottom=0,n-1
        while top<bottom:
            matrix[top][j],matrix[bottom][j]=matrix[bottom][j],matrix[top][j]
            top+=1
            bottom-=1
for row in matrix:
    print(" ".join(row))
