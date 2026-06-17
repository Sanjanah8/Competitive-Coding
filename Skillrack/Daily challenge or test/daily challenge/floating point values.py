import re
s=input().strip()
floats=re.findall(r'\d+\.\d+',s)
for f in floats:
    print(f)
