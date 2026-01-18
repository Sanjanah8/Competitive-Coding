n=int(input().strip())
subs=[]
for _ in range(n):
    line=input().rstrip()
    while line=="":
        line=input().rstrip()
    p=line.split()
    t0=p[0]; dur=int(p[-1])
    cont=" ".join(p[1:-1])
    mm,ss=map(int,t0.split(":"))
    s=mm*60+ss
    subs.append((s,s+dur-1,cont))
x,y=input().split()
xm,xs=map(int,x.split(":"));
ym,ys=map(int,y.split(":"))
a=xm*60+xs; b=ym*60+ys
out=[]
anysub=False
for t in range(a,b+1):
    cur=[]
    for s,e,c in subs:
        if s<=t<=e:
            cur.append(c)
    if cur:
        anysub=True
        out.append(f"{t//60:02d}:{t%60:02d} "+ " | ".join(cur))
    else:
        out.append(f"{t//60:02d}:{t%60:02d}")
if not anysub:
    print(-1)
else:
    print("\n".join(out))
    
