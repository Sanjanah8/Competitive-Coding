n=input().strip()
odd=0
even=0
for digit in n:
    if int(digit)%2==0:
        even+=1
    else:
        odd+=1
if odd>even:
    print(odd)
else:
    print(even)
