import sys

def is_p(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

nums = list(map(int, sys.stdin.read().split()))
print(*(sorted(nums, key=lambda x: (0 if is_p(x) else (1 if x % 2 else 2), x))))
