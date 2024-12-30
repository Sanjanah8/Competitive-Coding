r,c=map(int,input().split())
matrix=[input().split()for row in range(r)]
for row in range(r):
    if row%2==0:
        print(''.join(matrix[row][:min(row+1,c)]))
    else:
        print(''.join(matrix[row][max(c-row-1,0):]))
