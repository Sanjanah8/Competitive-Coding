X = input().strip()
d = [int(i) for i in X]
L = len(d)
is_arm = sum(i**L for i in d) == int(X)
print(sum(i for i in d if i % 2 == (0 if is_arm else 1)))
