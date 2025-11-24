n=int(input().strip())
sizes=list(map(int,input().split()))
total_size=sum(sizes)
pendrive_size=1
while pendrive_size < total_size:
    pendrive_size*=2
print(pendrive_size)
