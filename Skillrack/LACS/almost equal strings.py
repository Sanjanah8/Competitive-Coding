a=input().strip()
b=input().strip()
m=[(x,y)for x,y in zip(a,b)if x!=y]
if not m:
    print("true")
elif len(m)==2 and m[0]==m[1][::-1]:
    print("true")
else:
    print("false")
