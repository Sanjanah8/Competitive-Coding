n=int(input())
matrix=[list(map(int,input().split()))for _ in range(n)]
if n%2==1:
    mid=n//2
    print(matrix[mid][mid])
else:
    mid=n//2
    for i in range(mid-1,mid+1):
        for j in range(mid-1,mid+1):
            print(matrix[i][j],end=" ")
        print()
