def findcommonsubmatrix():
    m,n=map(int,input().split())
    m1=[list(map(int,input().split())) for _ in range(m)]
    r,c=map(int,input().split())
    m2=[list(map(int,input().split()))for _ in range(r)]
    t=int(input())
    def getsubmatrices(matrix,rows,cols):
        submatrices={}
        for i in range(rows-t+1):
            for j in range(cols-t+1):
                submatrix=tuple(tuple(matrix[i+x][j:j+t])for x in range(t))
                submatrices[submatrix]=(i,j)
        return submatrices
    submatricesm1=getsubmatrices(m1,m,n)
    submatricesm2=getsubmatrices(m2,r,c)
    for submatrix in submatricesm1:
        if submatrix in submatricesm2:
            for row in submatrix:
                print(*row) 
            return
    print(-1)
findcommonsubmatrix()
