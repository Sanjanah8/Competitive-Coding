n=int(input())
topbatsman=""
max=-1
for _ in range(n):
    batsman_data=input()
    name,score=batsman_data.split(",")
    score=int(score)
    if score> max:
        max=score
        topbatsman=name
print(topbatsman)
