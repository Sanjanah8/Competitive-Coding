n=int(input())
p=[]
for _ in range(n):
    d=input().split()
    p.append((d[0],d[1],d[2]))
t=input()
o=[x[0]for x in sorted([y for y in p if y[1]<=t<y[2]],key=lambda z:(z[1],z[0]))]
print(*o if o else[-1],sep="\n")
