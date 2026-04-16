n = int(input())
fruits = list(map(int, input().split()))
x, k = map(int, input().split())

target_idx = x - 1
max_fruits = 0

for i in range(n - k + 1):
    if i <= target_idx <= i + k - 1:
        current_sum = sum(fruits[i : i + k])
        if current_sum > max_fruits:
            max_fruits = current_sum

print(max_fruits)
