n = input().strip()
res = "".join(str(int(n[i])**2) for i in range(1, len(n), 2))

if len(res) >= 4:
    print(res[:4])
else:
    print(-1)
