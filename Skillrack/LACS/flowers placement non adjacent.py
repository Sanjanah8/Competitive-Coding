import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
        
    p = int(input_data[0])
    flowerbed = [int(x) for x in input_data[1:p+1]]
    n = int(input_data[p+1])
    
    count = 0
    i = 0
    while i < p:
        if flowerbed[i] == 0:
            left_empty = (i == 0) or (flowerbed[i - 1] == 0)
            right_empty = (i == p - 1) or (flowerbed[i + 1] == 0)
            
            if left_empty and right_empty:
                flowerbed[i] = 1
                count += 1
                i += 1
        i += 1
        
    if count >= n:
        print("yes")
    else:
        print("no")

if __name__ == '__main__':
    solve()
