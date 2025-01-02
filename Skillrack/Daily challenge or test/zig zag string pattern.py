s=input().strip()+'#'*10000
n=int(input())
i=0
for ctr in range(1,n+1):
    print('*'*(n-ctr),end="")
    if ctr==1 or ctr%2==0:
        print(s[i:i+(ctr*2-1)])
    else:
        print(s[i:i+(ctr*2-1)][::-1])
    i+=(ctr*2-1)
