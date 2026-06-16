s = input().strip()
ch = input().strip()

count_ch = s.count(ch)
percentage = (count_ch * 100) // len(s)

print(percentage)
