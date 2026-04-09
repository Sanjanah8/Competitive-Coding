n = int(input())
mileages = []

for i in range(n):
    fuel, dist = map(int, input().split())
    mileages.append(dist / fuel)
print(mileages.index(max(mileages)) + 1)
