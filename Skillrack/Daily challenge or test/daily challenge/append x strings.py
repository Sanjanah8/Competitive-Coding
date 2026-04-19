n=int(input().strip())
arr=[]
for _ in range(n):
    arr.append(input().strip())
result=''.join(arr[::-1])
print(result)
