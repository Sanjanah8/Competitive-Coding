n = int(input())  # Base
x, y = input().split()  # x and y in base-n

# Convert both numbers from base-n to base-10
x_base10 = int(x, n)
y_base10 = int(y, n)

# Add and print
print(x_base10 + y_base10)
