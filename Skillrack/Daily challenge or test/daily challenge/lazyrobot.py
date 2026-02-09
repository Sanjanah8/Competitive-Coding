n=int(input())
commands=[]
for _ in range(n):
    t,x=map(int,input().split())
    commands.append((t,x))
pos=0
free_time=0
ignored=0
for t,x in commands:
    if t<free_time:
        ignored+=1
    else:
        travel=abs(x-pos)
        free_time=t+travel
        pos=x
print(ignored)
print(pos)
