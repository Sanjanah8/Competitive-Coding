s=input()
u=s.find('_')
if u!=-1:
    r=s[:u][::-1]
    print(r+s[u:])
else:
    print(s[::-1])
