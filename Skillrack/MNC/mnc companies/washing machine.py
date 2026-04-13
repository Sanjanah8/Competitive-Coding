w = int(input())
if w == 0: print(0)
elif 1 <= w <= 2000: 
  print(25)
elif 2001 <= w <= 4000: 
  print(35)
elif 4001 <= w <= 7000: 
  print(45)
elif w > 7000: 
  print("OVERLOADED")
else: print("INVALID INPUT")
