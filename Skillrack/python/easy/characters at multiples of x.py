s=input()
x=int(input())
result=""
for i in range(x-1,len(s),x):
    result+=s[i]
print(result)
