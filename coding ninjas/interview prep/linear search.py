from sys import stdin

def linearSearch(arr, n, val) :
    found=[]
    for i in range(n):
        if arr[i]==val:
            found.append(i)
            return found[0]
    return -1

