s=input().strip()
vowels=set("aeiou")
lastvowelindex=-1
for i in range(len(s)):
    if s[i] in vowels:
        lastvowelindex=i
if lastvowelindex==1:
    print(s)
else:
    prefix=s[:lastvowelindex+1][::-1]
    suffix=s[lastvowelindex+1:]
    print(prefix+suffix)
