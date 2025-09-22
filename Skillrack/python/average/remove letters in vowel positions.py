def process_string(s):
    if not (2 <= len(s) <= 50):
        return "invalidinput"

    vowels = "aeiouAEIOU"

    # Find vowel positions in original string (1-based)
    vowel_positions = [i+1 for i, ch in enumerate(s) if ch in vowels]

    # Reverse the string
    rev = list(s[::-1])

    # Remove characters at vowel positions
    result = "".join([ch for i, ch in enumerate(rev, start=1) if i not in vowel_positions])

    return result


# Example
word = input("Enter a string (length 2 to 50): ")
print(process_string(word))
