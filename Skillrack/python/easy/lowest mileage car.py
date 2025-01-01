cars=input().split()
minmileage=float('inf')
mincar=""
for car in cars:
    name,mileage=car.split('@')
    mileage=float(mileage)
    if mileage<minmileage:
        minmileage=mileage
        mincar=name
print(mincar)
