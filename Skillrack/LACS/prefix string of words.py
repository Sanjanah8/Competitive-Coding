s=input().strip()
n=int(input())
w=[input().strip() for _ in range(n)]
p=""
f=False
for x in w:
    p+=x
    if p==s:
        f=True
        break
    if not s.startswith(p):
        break
print("true" if f else "false")
