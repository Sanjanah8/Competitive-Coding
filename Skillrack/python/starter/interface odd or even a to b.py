a=int(input())
b=int(input())
fromctr=a
toctr=b
oddprint=1
if a%2==0 and b%2==0:
    oddprint=0
while fromctr<=b or toctr>=a:
    if oddprint:
        while(fromctr%2!=1):
            fromctr+=1
        if fromctr<=b:
            print(fromctr,end=" ")
        oddprint=0
    if not oddprint:
        while(toctr%2!=0):
            toctr-=1
        if toctr>=a:
            print(toctr,end=" ")
        oddprint=1
    fromctr+=1
    toctr-=1
