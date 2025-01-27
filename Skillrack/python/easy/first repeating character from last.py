s=input().strip()
seen=set()
for i in range(len(s)-1,-1,-1):
    if s[i] in seen:
        print(s[i])
        break
    seen.add(s[i])
