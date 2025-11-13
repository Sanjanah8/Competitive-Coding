from math import *
from collections import *
from sys import *
from os import *

arr = list(map(int,input().split()))
n=arr[0]
elements=arr[1:]
def total(elements):
    return sum(x for x in elements if x%2==0 or x%3==0)
print(total(elements))

