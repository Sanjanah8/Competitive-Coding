s=input().strip()
print(sum(s[i:j]==s[i:j][::-1] for i in range(len(s)) for j in range(i+2,len(s)+1)))
