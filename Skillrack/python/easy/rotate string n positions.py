def rotate(s,n):
    n=n%len(s)
    rotated = s[-n:]+s[:-n]
    print(rotated)
s=input().strip()
n=int(input().strip())
rotate(s,n)
