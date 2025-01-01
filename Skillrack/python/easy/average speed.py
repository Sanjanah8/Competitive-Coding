l=input()
totald=0
totalt=0
entries=l.split()
for entry in entries:
    d,t=map(float,entry.split('@'))
    totald+=d
    totalt+=t
average=totald/totalt
print(f"{average:.2f}kmph")
