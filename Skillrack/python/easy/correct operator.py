expr = input("Enter expression (like 5 * 3 = 15): ").replace(" ", "")

# Split into parts: a ? b = c
for op in "+-*/":
    if op in expr:
        a, rest = expr.split(op)
        b, c = rest.split("=")
        a, b, c = int(a), int(b), int(c)
        wrong_op = op
        break

# Check which operator actually works
correct_op = None
if a + b == c:
    correct_op = "+"
elif a - b == c:
    correct_op = "-"
elif a * b == c:
    correct_op = "*"
elif b != 0 and a / b == c:
    correct_op = "/"

print("Correct operator is:", correct_op)
