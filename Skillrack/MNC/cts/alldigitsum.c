int allDigitSum(int *arr, int LENGTH)
{
    int totalSum = 0;
    
    for (int i = 0; i < LENGTH; i++)
    {
        int num = arr[i];
        
        // Handle negative numbers if any (take absolute value)
        if (num < 0) num = -num;
        
        // Extract and sum digits
        while (num > 0)
        {
            totalSum += num % 10;
            num /= 10;
        }
    }
    
    return totalSum;
}
