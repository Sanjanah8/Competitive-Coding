1) n, x = [int(val) for val in input().split()]
for i in range(x, n + 1, x):
    print(i, end=' ')


2)# Approach 1: Basic for Loop with if Statement
n, x = [int(val) for val in input().split()]
for i in range(1, n + 1):
    if i % x == 0:
        print(i, end=' ')

# Approach 2: Using list and join with List Comprehension
n, x = [int(val) for val in input().split()]
print(' '.join(str(i) for i in range(1, n + 1) if i % x == 0))

# Approach 3: Using filter and lambda Functions
n, x = [int(val) for val in input().split()]
multiples = filter(lambda i: i % x == 0, range(1, n + 1))
print(*multiples)

# Approach 4: Using a List Comprehension and print with *
n, x = [int(val) for val in input().split()]
print(*[i for i in range(1, n + 1) if i % x == 0])
print()  # To add a newline at the end

# Approach 5: Using a while Loop
n, x = [int(val) for val in input().split()]
i = 1
while i <= n:
    if i % x == 0:
        print(i, end=' ')
    i += 1
print() 

# Approach 6: Using range with a Step Value
n, x = [int(val) for val in input().split()]
for i in range(x, n + 1, x):
    print(i, end=' ')

# Approach 7: Using List Comprehension to Generate and Print in One Line
n, x = [int(val) for val in input().split()]
print(*[i for i in range(x, n + 1, x)])

# Approach 8: Using a Generator Expression and print with *
n, x = [int(val) for val in input().split()]
print(*((i for i in range(1, n + 1) if i % x == 0)))

# Approach 9: Using map and filter Functions
n, x = [int(val) for val in input().split()]
print(*map(int, filter(lambda i: i % x == 0, range(1, n + 1))))

# Approach 10: Using itertools for Generating Multiples
import itertools

n, x = [int(val) for val in input().split()]
multiples = itertools.count(x, x)
print(*[i for i in multiples if i <= n])
print()  # To add a newline at the end
