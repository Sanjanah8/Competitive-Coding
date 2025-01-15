n=int(input())
line=""
for ctr in range(1,n+1):
    line=line+chr(64+ctr)+line
    print(line)
