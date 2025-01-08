r,c=map(int,input().split())
max_capacity=[list(map(int,input().split())) for _ in range(r)]
water_levels=[list(map(int,input().split())) for _ in range(r)]
x=int(input())

for startrow in range(r):
    i,j=startrow,0
    excess=x
    while i<r and j<c:
        water_levels[i][j]+=excess
        if water_levels[i][j]> max_capacity[i][j]:
            excess=water_levels[i][j]-max_capacity[i][j]
            water_levels[i][j]=max_capacity[i][j]
        else:
            break
        i+=1
        j+=1
    
for startcol in range(1,c):
    i,j=0,startcol
    excess=x
    while i<r and j<c:
        water_levels[i][j]+=excess
        if water_levels[i][j] > max_capacity[i][j]:
            excess=water_levels[i][j]-max_capacity[i][j]
            water_levels[i][j]=max_capacity[i][j]
        else:
            break
        i+=1
        j+=1
        
for row in water_levels:
    print(*row)
            
