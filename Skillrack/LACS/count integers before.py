import sys

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    n = int(input_data[0])
    nums = [int(x) for x in input_data[1:n+1]]
    
    sorted_nums = sorted(nums)
    smaller_count_map = {}
    
    for i, num in enumerate(sorted_nums):
        if num not in smaller_count_map:
            smaller_count_map[num] = i
            
    result = [smaller_count_map[num] for num in nums]
    print(*(result))

if __name__ == '__main__':
    main()
