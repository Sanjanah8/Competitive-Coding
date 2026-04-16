s = input().strip()
words = s.split()
if s[0].isupper() and s.endswith('.') and len(words) >= 2 and s.count('.') == 1:
    print("True")
else:
    print("False")
