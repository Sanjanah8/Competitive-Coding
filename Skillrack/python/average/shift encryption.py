m,x,y=input(),int(input()),int(input())
for c in m:
 if c.islower():c=chr((ord(c)-97+x)%26+97)
 if c.isdigit():c=str((int(c)+y)%10)
 print(c,end="")
