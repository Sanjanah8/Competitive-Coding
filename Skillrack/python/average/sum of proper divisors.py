def sum_of_proper_divisors(n):
    total = 0
    for i in range(1, n):
        if n % i == 0:
            total += i
    return total

n = int(input())
print(sum_of_proper_divisors(n))

n = int(input())
total = 0
for i in range(1, n):
    if n % i == 0:
        total += i
print(total)

