n, e = map(int, input().split())

total_drank = n
empty_bottles = n

while empty_bottles >= e:
    new_bottles = empty_bottles // e
    total_drank += new_bottles
    empty_bottles = (empty_bottles % e) + new_bottles

print(total_drank)
