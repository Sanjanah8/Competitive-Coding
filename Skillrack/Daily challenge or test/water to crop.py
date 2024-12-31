def check_water():
    r,c=map(int,input().split())
    matrix=[input().split() for _ in range(r)] 
    direction=[(-1,-1),(-1,0),(-1,1),(0,-1),(0,1),(1,-1),(1,0),(1,1)]
    def is_withinbounds(x,y):
        return 0 <= x < r and 0 <= y < c
    wateredcrops=set()
    
    for i in range(r):
        for j in range(c):
            if matrix[i][j]=='W':
                for dx,dy in direction:
                    nx,ny=i+dx,j+dy
                    if is_withinbounds(nx,ny) and matrix[nx][ny]=='C':
                       wateredcrops.add((nx,ny))
    total=sum(row.count('C')for row in matrix)
    unwatered=total-len(wateredcrops)
    
    if unwatered==0:
        print("YES")
    else:
        print(unwatered)
check_water()
