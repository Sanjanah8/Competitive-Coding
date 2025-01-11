s=input()
for char in s:
    if s.count(char)>1:
        print(char)
        break
