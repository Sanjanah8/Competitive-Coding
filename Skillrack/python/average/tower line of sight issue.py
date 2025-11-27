eps = 1e-9
ax, ay = map(float, input().split())
bx, by = map(float, input().split())
cx, cy = map(float, input().split())
dx, dy = map(float, input().split())

def collinear(x1,y1,x2,y2,x3,y3):
    return abs((y2-y1)*(x3-x1) - (y3-y1)*(x2-x1)) < eps

def between(x1,y1,x2,y2,x3,y3):
    return (x3-x1)*(x3-x2) + (y3-y1)*(y3-y2) <= eps

block_AC = (collinear(ax,ay,cx,cy,bx,by) and between(ax,ay,cx,cy,bx,by)) or (collinear(ax,ay,cx,cy,dx,dy) and between(ax,ay,cx,cy,dx,dy))
block_BD = (collinear(bx,by,dx,dy,ax,ay) and between(bx,by,dx,dy,ax,ay)) or (collinear(bx,by,dx,dy,cx,cy) and between(bx,by,dx,dy,cx,cy))

print("NO" if block_AC or block_BD else "YES")
