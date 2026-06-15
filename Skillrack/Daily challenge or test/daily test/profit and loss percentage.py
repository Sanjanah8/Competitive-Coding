n=int(input())
a=[tuple(map(int,input().split()))for _ in range(n)]
m=int(input())
p=l=0
for cp,sp in a:
    
    if sp>cp and (sp-cp)*100/cp >=m:
            p+=1
    elif cp>sp and (cp-sp)*100/cp >=m:
            l+=1
print(p,l)
