s1=input().strip()
s2=input().strip()
count=0
for ch in range(len(s1)):
    if s1[ch]!=s2[ch]:
        count+=1
    if s1.count(s1[ch])!=s2.count(s1[ch]):
        print("NO")
        break
else:
    if count<=2:
        print("YES")
    else:
        print("NO")
