X, Y, Z = input().split()
K = ""
K += min(X[0], Y[0], Z[0])
K += max(X[1], Y[1], Z[1])
K += min(X[2], Y[2], Z[2])
K += max(X[3], Y[3], Z[3])
print(K)
