goals_A = list(map(int, input().split()))
goals_B = list(map(int, input().split()))

score_A = 0
score_B = 0

for a, b in zip(goals_A, goals_B):
    if a > b:
        score_A += 3
    elif a < b:
        score_B += 3
    else:
        score_A += 1
        score_B += 1

print(score_A, score_B)
