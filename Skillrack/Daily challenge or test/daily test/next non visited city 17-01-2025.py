R,C,X,Y=map(int,input().split())
moves=input().strip()
row=X-1
col=Y-1
visited=set()
visited.add((row,col))
for move in moves:
    new_r,new_c=row,col
    if move=='N':
        temp=row-1
        while temp>=0:
            if(temp,col) not in visited:
                new_r=temp
                break
            temp-=1
        else:
            new_r=0
    elif move=='S':
        temp=row+1
        while temp<R:
            if(temp,col) not in visited:
                new_r=temp
                break
            temp+=1
        else:
            new_r=R-1
    elif move=='E':
        temp=col+1
        while temp<C:
            if(row,temp) not in visited:
                new_c=temp
                break
            temp+=1
        else:
            new_c=C-1
    elif move=='W':
        temp=col-1
        while temp>=0:
            if(row,temp)not in visited:
                new_c=temp
                break
            temp-=1
        else:
            new_c=0
    row,col=new_r,new_c
    visited.add((row,col))
print(row+1,col+1)
