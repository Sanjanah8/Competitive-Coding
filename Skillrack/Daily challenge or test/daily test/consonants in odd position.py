s=input().strip()
vowels="aeiou"
for i in range(0,len(s),2):
    ch=s[i]
    if ch not in vowels:
        print(ch,ord(ch),ch.upper(),ord(ch.upper()))
