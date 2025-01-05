n=int(input())
firstinnings=0
secondinnings=0
for _ in range(n):
    first,second=map(int,input().split())
    firstinnings+=first
    secondinnings+=second
print(f"{firstinnings/n:.2f}")
print(f"{secondinnings/n:.2f}")
