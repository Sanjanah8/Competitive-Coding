s=input()
result=""
i=0
while i<len(s):
    num=int(s[i])
    result+=s[i+1]*num
    i+=2
print(result)
