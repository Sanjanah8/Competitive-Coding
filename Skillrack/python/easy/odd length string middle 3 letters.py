s = input().strip()
n = len(s)

# Middle index
mid = n // 2

# Middle three letters
middle_three = s[mid-1:mid+2]

print(middle_three)
