s=input().strip()
alphaStr=digitStr=""
for ch in s:
    if ch.isalpha():
        alphaStr+=ch
    else:
        digitStr+=ch
point=0
if s==s[::-1]:
    point+=1
if alphaStr==alphaStr[::-1] and alphaStr:
    point+=1
if digitStr==digitStr[::-1] and digitStr:
    point+=1
result = ["No","Single","Double","Triple"]
print(result[point],"Palindrome")
