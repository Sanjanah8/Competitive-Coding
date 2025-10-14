class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        a=''.join(c for c in s if c.isalnum())
        return a == a[::-1]
        
#A man, a plan, a canal: Panama
s=input().lower().strip()
print(s)
for i in s:
    if not i.isalpha():
        s=s.replace(i, "")
        print(s)
        if s==s[::-1]:
            return True
        else:
            return False

# Enter a string: A man, a plan, a canal: Panama
          
# a man, a plan, a canal: panama ← original lowercase input
# aman,aplan,acanal:panama ← after removing spaces
# amanaplanacanal:panama ← after removing commas
# amanaplanacanal:panama ← (space encountered again)
# amanaplanacanal:panama ← (space again)
# amanaplanacanal:panama ← (comma again)
# amanaplanacanal:panama ← (space again)
# amanaplanacanal:panama ← (space again)
# amanaplanacanalpanama ← after removing colon

# The string is a palindrome
