def next_greater_number(n):
    digits = list(str(n))
    i = len(digits) - 2
    
    # Step 1: find first decreasing element from right
    while i >= 0 and digits[i] >= digits[i + 1]:
        i -= 1

    if i == -1:  # no greater number possible
        return -1
    
    # Step 2: find element just larger than digits[i]
    j = len(digits) - 1
    while digits[j] <= digits[i]:
        j -= 1
    
    # Step 3: swap
    digits[i], digits[j] = digits[j], digits[i]
    
    # Step 4: reverse suffix
    digits[i + 1:] = reversed(digits[i + 1:])
    
    return int("".join(digits))


# ---- main ----
n = int(input().strip())
print(next_greater_number(n))
