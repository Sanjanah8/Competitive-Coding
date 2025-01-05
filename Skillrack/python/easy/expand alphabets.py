s=input().strip()
b=""
for i in s:
    if i.isdigit():
        b="".join([b,i])
    else:
        print(int(b)*i,end="")
        b=""
