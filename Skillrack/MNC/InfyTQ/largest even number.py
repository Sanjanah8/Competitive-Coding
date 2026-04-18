s = input()
d = sorted(list(set([x for x in s if x.isdigit()])), reverse=True)
e = sorted([x for x in d if int(x) % 2 == 0])

if not e:
    print("-1")
else:
    l = e[0]
    d.remove(l)
    print("".join(d) + l)
