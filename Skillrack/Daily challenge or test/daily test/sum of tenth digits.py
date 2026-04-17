n=int(input())
arr=list(map(int,input().split()))
sum_val=0
for num in arr:
    tens=(num//10)%10
    sum_val+=tens
print(sum_val)
