n = int(input())
data = {}

for _ in range(n):
    country, capital = input().split()
    data[country] = capital

search_country = input().strip()
print(data.get(search_country, "NONE"))
