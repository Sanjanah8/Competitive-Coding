N = int(input())
sumOfDigits = 0
while N > 0:
    sumOfDigits += N % 10
    N //= 10
print(sumOfDigits)
