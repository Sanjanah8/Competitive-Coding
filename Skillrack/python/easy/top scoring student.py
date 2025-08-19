n = int(input().strip())
topper = ""
topperscore = -1

for _ in range(n):
    data = input().split(":")        # split by colon instead of space
    name = data[0]
    marks = list(map(int, data[1:])) # convert marks to integers
    total = sum(marks)

    if total > topperscore:
        topperscore = total
        topper = name

print(topper)
