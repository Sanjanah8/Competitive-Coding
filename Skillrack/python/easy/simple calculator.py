s=input()
for o in ['a','s','m','d','A','S','M','D']:
    if o in s:
        a,b=map(int,s.split(o))
        break
if o=='a' or o=='A':
    result=a+b
elif o=='s' or o=='S':
    result=a-b
elif o=='m' or o=='M':
    result=a*b
elif o=='d' or o=='D':
    result=a//b
print(result)
