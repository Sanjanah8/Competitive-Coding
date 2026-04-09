s = input().split()
w1 = input().strip()
w2 = input().strip()

min_dist = len(s)
w1i = [i for i, word in enumerate(s) if word == w1]
w2i = [j for j, word in enumerate(s) if word == w2]

for i in w1i:
    for j in w2i:
        if i != j:
            min_dist = min(min_dist, abs(i - j))

print(min_dist)
