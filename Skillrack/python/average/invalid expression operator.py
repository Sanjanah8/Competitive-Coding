expr = input().strip()

for i in range(len(expr)):
    if expr[i] in '+-*/':
        op_index = i
    if expr[i] == '=':
        eq_index = i

a = int(expr[:op_index])
b = int(expr[op_index + 1:eq_index])
c = int(expr[eq_index + 1:])

if a + b == c:
    print('+')
elif a - b == c:
    print('-')
elif a * b == c:
    print('*')
elif b != 0 and a / b == c:
    print('/')
else:
    print("No valid operator found")

========================================
expr = input().strip()

# Find the position of the operator and equal sign
for i in range(len(expr)):
    if expr[i] in '+-*/':
        op_index = i
    if expr[i] == '=':
        eq_index = i

a = expr[:op_index]
b = expr[op_index+1:eq_index]
c = expr[eq_index+1:]

a, b, c = int(a), int(b), int(c)

# Try all operators using eval
for op in '+-*/':
    if op == '/' and b == 0:
        continue
    if eval(f'{a}{op}{b}') == c:
        print(op)
        break
============================================
import operator

ops = {
    '+': operator.add,
    '-': operator.sub,
    '*': operator.mul,
    '/': operator.truediv
}

expr = input().strip()

# Detect operator and equal sign
for i in range(len(expr)):
    if expr[i] in '+-*/':
        op_index = i
    if expr[i] == '=':
        eq_index = i

a = int(expr[:op_index])
b = int(expr[op_index+1:eq_index])
c = int(expr[eq_index+1:])

# Try all operators
for symbol, func in ops.items():
    try:
        if func(a, b) == c:
            print(symbol)
            break
    except ZeroDivisionError:
        continue

