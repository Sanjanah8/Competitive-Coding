s1 = input().strip()
s2 = input().strip()

it = iter(s1)
print("YES" if all(c in it for c in s2) else "NO")
