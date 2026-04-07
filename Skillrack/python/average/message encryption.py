msg = input().strip()
cols = int(input())

# Break the message into rows of length 'cols'
rows = []
for i in range(0, len(msg), cols):
    rows.append(msg[i : i + cols])

# The encryption process reversed every other row (1st, 3rd, 5th...)
# So to decrypt, we reverse those specific rows back.
original_message = ""
for i in range(len(rows)):
    if i % 2 == 1:
        original_message += rows[i][::-1]
    else:
        original_message += rows[i]

print(original_message)
