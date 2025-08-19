def read_matrix(n):
    nums = []
    while len(nums) < n * n:
        try:
            line = input()
        except EOFError:
            break
        if not line.strip():
            continue
        parts = line.strip().split()
        for p in parts:
            nums.append(int(p))
    if len(nums) < n * n:
        raise ValueError("Not enough numbers to fill the matrix")
    
    # return must be OUTSIDE the if
    return [nums[i*n:(i+1)*n] for i in range(n)]

def main():
    nline = input().strip()
    if not nline:
        return
    n = int(nline)
    matrix = read_matrix(n)

    if n == 1:
        cornersum = matrix[0][0]
    else:
        cornersum = (
            matrix[0][0] +
            matrix[0][n-1] +
            matrix[n-1][0] +
            matrix[n-1][n-1]
        )
    print(cornersum)

if __name__ == "__main__":
    main()
