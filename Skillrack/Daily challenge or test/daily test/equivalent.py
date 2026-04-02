n=int(input())
matrix=[]
for _ in range(n):
    matrix.append(list(map(int,input().split())))
left=[]
right=[]
for i in range(n):
    left.append(matrix[i][i])
    right.append(matrix[i][n-i-1])
if set(left)==set(right):
    print("yes")
else:
    print("no")
