n=int(input())
mid=n//2
for i in range(n):
    if i==mid:
        for j in range(1,n+1):
            print(j,end="")
        print()
    else:
        for j in range(n):
            if j==i or j==n-1-i:
                print("*",end="")
            elif j==mid:
                print(i+1,end="")
            else:
                print("-",end="")
        print()
