r,c=map(int,input().split())
matrix=[input().split()for _ in range(r)]
top,bottom=0,r-1
left,right=0,c-1
s=""
while top<=bottom and left<=right:
    for i in range(left,right+1):
        s+=matrix[top][i]
    top+=1
    for i in range(top,bottom+1):
        s+=matrix[i][right]
    right-=1
    if top<=bottom:
        for i in range(right,left-1,-1):
            s+=matrix[bottom][i]
        bottom-=1
    for i in range(top,bottom+1):
        s+=matrix[i][right]
    right-=1
    if top<=bottom:
        for i in range(right,left-1,-1):
            s+=matrix[bottom][i]
        bottom-=1
    if left<=right:
        for i in range(bottom,top-1,-1):
            s+=matrix[i][left]
        left+=1
if s==s[::-1]:
    print("YES")
else:
    print("NO")
