n,k=input().split()
n,k=list(n),int(k)
for digit in range(0,10):
    n[k-1]=str(digit)
    print(int(''.join(n)),end=" ")

//input 123 2 output 103 113 123
