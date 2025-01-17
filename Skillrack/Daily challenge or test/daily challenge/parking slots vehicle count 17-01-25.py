r,c=map(int,input().split())
vehiclecount=0
for ctr in range(1,r+1):
    slots=input().split()
    for i in range(0,c-1):
        if slots[i]=='V' and slots[i+1]=='.':
            vehiclecount+=1
    if slots[-1]=='V':
        vehiclecount+=1
print(vehiclecount)
