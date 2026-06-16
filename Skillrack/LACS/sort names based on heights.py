n = int(input())
data = []

for _ in range(n):
    name, height = input().split()
    data.append((name, int(height)))

data.sort(key=lambda x: x[1], reverse=True)

for person in data:
    print(person[0])
