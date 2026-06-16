s = input().strip()

hyphens = s.count('-')
underscores = s.count('_')

if hyphens >= 2 and underscores >= 1:
    ans = (hyphens * (hyphens - 1) // 2) * underscores
    print(ans)
else:
    print(0)
