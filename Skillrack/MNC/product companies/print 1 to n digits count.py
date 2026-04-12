n = int(input())
total = 0
i = 1
while i <= n:
    total += n - i + 1
    i *= 10
print(total)
