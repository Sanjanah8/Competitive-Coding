s = input().strip()

hyphens = s.count('-')
underscores = s.count('_')

left_hyphens = hyphens // 2
right_hyphens = hyphens - left_hyphens

ans = left_hyphens * underscores * right_hyphens
print(ans)
