s=input().strip()
e=input().strip()
count=0
for i in range(len(s)-len(e)+1):
    if s[i:i+len(e)]==e:
        count+=1
print(count)
