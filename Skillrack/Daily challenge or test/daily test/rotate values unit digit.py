def rotate(matrix,r,c):
    target=matrix[r-1][c-1]%10
    border=[]
    positions=[]
    for col in range(c):
        if matrix[0][col]%10==target:
            border.append(matrix[0][col])
            positions.append((0,col))
    for row in range(1,r-1):
        if matrix[row][c-1]%10==target:
            border.append(matrix[row][c-1])
            positions.append((row,c-1))
    for col in range(c-1,-1,-1):
        if matrix[r-1][col]%10==target:
            border.append(matrix[r-1][col])
            positions.append((r-1,col))
    for row in range(r-2,0,-1):
        if matrix[row][0]%10==target:
            border.append(matrix[row][0])
            positions.append((row,0))
    if border:
        border=[border[-1]]+border[:-1]
    for i,(row,col) in enumerate(positions):
        matrix[row][col]=border[i]
r,c=map(int,input().split())
matrix=[list(map(int,input().split())) for _ in range(r)]
rotate(matrix,r,c)
for row in matrix:
    print(*row)
