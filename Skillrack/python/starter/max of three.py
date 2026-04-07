X, Y, Z = [int(val) for val in input().split()]
print(X if X >= Y and X >= Z else Y if Y >= Z else Z)
