m,x,y=input(),int(input()),int(input())
for c in m:
 if c.islower():c=chr((ord(c)-97+x)%26+97)
 elif c.isdigit():c=int(c)+y
 print(c,end="")
