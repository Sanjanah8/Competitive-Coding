s=input().strip()
n=len(s)
mid=n//2
if n%2==0:
    first=s[:mid]
    second=s[mid:]
    result=first[::-1]+second[::-1]
else:
    first=s[:mid]
    middle=s[mid]
    second=s[mid+1:]
    result=first[::-1]+middle+second[::-1]
print(result)
