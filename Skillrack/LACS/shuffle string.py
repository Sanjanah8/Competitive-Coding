s1 = input().strip()
s2 = input().strip()

if len(s1) != len(s2):
    print("false")
else:
    diff = []
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            diff.append(i)
            
    if len(diff) == 0:
        print("true")
    elif len(diff) == 2:
        i, j = diff[0], diff[1]
        if s1[i] == s2[j] and s1[j] == s2[i]:
            print("true")
        else:
            print("false")
    else:
        print("false")
