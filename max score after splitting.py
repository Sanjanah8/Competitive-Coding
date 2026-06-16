s = input().strip()

total_ones = s.count('1')
max_score = 0
left_zeros = 0
left_ones = 0

for i in range(len(s) - 1):
    if s[i] == '0':
        left_zeros += 1
    else:
        left_ones += 1
        
    right_ones = total_ones - left_ones
    current_score = left_zeros + right_ones
    
    if current_score > max_score:
        max_score = current_score

print(max_score)
