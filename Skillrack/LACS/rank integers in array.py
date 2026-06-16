n = int(input())
nums = [int(x) for x in input().split()]

rank_map = {num: i + 1 for i, num in enumerate(sorted(set(nums)))}

print(*(rank_map[num] for num in nums))
