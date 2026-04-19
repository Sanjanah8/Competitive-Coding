void sort(int *arr, int LENGTH)
{
    int i, j, temp;
    for (i = 0; i < LENGTH - 1; i++)
    {
        for (j = 0; j < LENGTH - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
