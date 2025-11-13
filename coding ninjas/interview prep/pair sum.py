from os import *
from sys import *
from collections import *
from math import *

def pairSum(arr, s):
    result = []
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] + arr[j] == s:
                pair = [min(arr[i], arr[j]), max(arr[i], arr[j])]
                result.append(pair)
    result.sort(key=lambda x: (x[0], x[1]))
    return result
