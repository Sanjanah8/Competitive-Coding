s = input()
print("yes" if all(abs(int(s[i]) - int(s[i-1])) == 1 for i in range(1, len(s))) else "no")
