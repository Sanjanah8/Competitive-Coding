s = input().strip()
n = len(s)

# Two pointers
i, j = 0, n - 1
missing = None

while i < j:
    if s[i] == s[j]:
        i += 1
        j -= 1
    else:
        # If mismatch, missing char is from the other side
        if s[i+1] == s[j]:   # left side is missing
            missing = s[i]
            break
        else:                # right side is missing
            missing = s[j]
            break

# Edge case: if string like "aba" missing last char -> must be first char
if missing is None:
    missing = s[0]

print(missing)
