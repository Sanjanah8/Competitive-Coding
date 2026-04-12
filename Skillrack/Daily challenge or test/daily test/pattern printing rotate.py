n=int(input())
nums=list(range(1,n+1))
for i in range(n):
    print(*(nums))
    nums=nums[-1:]+nums[:-1]
