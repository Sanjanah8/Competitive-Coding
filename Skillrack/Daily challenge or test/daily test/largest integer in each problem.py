r,c=map(int,input().split())
matrix=[]
result=[]
for _ in range(r):
    row=list(map(int,input().split()))
    matrix.append(row)
for col in range(c):
    max_val=matrix[0][col]
    for row in range(1,r):
        if matrix[row][col]>max_val:
            max_val=matrix[row][col]
    result.append(max_val)
print(*result)
