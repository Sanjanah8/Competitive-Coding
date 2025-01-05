s=list(input().strip())
a=input().strip()
b=input().strip()

count=0
for i in range(len(s)-1):
    if s[i]==a and s[i+1]==b:
        count+=1
        
print(count)
