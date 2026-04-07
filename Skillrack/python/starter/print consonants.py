strVal = input().strip()
vowels = "aeiouAEIOU"
for ch in strVal:
    if ch not in vowels:
        print(ch, end="")
