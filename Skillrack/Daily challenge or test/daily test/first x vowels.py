x=int(input().strip())
s=input().strip()
vowels="aeiouAEIOU"
result=""
count=0
for ch in s:
    if ch in vowels:
        result+=ch
        count+=1
        if count==x:
            break
print(result)
