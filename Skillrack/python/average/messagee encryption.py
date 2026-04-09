s = input().strip()
c = int(input())
rows = []

for i in range(0, len(s), c):
    row = s[i:i+c]
    if (i // c) % 2 == 1:
        rows.append(row[::-1])
    else:
        rows.append(row)

for col in range(c):
    for row in range(len(rows)):
        print(rows[row][col], end="")
