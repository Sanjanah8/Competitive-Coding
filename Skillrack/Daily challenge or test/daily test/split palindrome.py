s=input().strip()
def is_palindrome(text):
    return text==text[::-1]
n=len(s)
for i in range(1,n):
    left=s[:i]
    right=s[i:]
    if is_palindrome(left) and is_palindrome(right):
        print(left)
        print(right)
        break
