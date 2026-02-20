first,last=input().strip().split()
dob=input().strip()
given=input().strip()
gen=""
gen+=last[0]
gen+=last[1]
gen+=dob[7:11]
gen+=first[-2]
gen+=first[-1]
upper=[ch.isupper() for ch in gen]
rev=gen[::-1]
rev_list=list(rev)
for i in range(8):
    if upper[i]:
        rev_list[i]=rev_list[i].upper()
    else:
        rev_list[i]=rev_list[i].lower()
rev="".join(rev_list)
if rev==given:
    print("Correct")
else:
    print("Wrong")
