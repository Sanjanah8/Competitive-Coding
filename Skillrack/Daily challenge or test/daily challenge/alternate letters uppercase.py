s = input()

words = s.split()
result = []

for word in words:
    new_word = ""
    for i in range(len(word)):
        if i % 2 == 0:  # 0-based → odd position
            new_word += word[i].upper()
        else:
            new_word += word[i].lower()
    result.append(new_word)

print(" ".join(result))
