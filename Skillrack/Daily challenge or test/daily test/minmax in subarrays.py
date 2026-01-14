n,k=map(int,input().split())
arr=list(map(int,input().split()))
max_list=[]
for i in range(n-k+1):
    max_list.append(max(arr[i:i+k]))
print(min(max_list))
