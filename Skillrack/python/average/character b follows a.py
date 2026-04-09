s, a, b = input().strip(), input().strip(), input().strip()
print(sum(s[i:i+2] == a + b for i in range(len(s) - 1)))
