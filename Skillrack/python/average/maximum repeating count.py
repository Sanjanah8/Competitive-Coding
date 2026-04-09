nums = list(map(int, input().split()))
unique_nums = sorted(set(nums))
result = max(unique_nums, key=nums.count)
print(result)
