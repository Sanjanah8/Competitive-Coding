n=int(input())
strval=1
for row in range(1,n+1):
    numlist=[num*n for num in range(strval,strval+n)]
    if row%2==1:
        print(*numlist)
    else:
        print(*numlist[::-1])
    strval+=n
