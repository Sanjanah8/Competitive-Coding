import re
s = input()
print(re.sub(r'\b\w', lambda m: m.group().upper(), s))
