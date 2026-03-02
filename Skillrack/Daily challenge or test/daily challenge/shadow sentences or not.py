s1=input().split()
s2=input().split()
if len(s1)!=len(s2):
    print("NO")
else:
    for a,b in zip(s1,s2):
        if len(a)!=len(b) or set(a)&set(b):
            print("NO")
            break
    else:
        print("YES")
