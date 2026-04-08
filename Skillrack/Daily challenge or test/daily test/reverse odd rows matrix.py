n=int(input())
matrix=[list(map(int,input().split()))for _ in range(n)]
for i in range(n):
    if i%2==0:
        print(*matrix[i][::-1])
    else:
        print(*matrix[i])
