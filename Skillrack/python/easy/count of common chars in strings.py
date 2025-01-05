a=input()
b=input()
common=0
for char in set(a):
    if char in b:
        common+=1
print(common)
    
