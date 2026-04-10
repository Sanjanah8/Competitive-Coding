l1, l2 = map(int, input().split())
array1 = set(map(int, input().split()))
array2 = set(map(int, input().split()))
distinct_elements = array1 ^ array2
print(len(distinct_elements))
