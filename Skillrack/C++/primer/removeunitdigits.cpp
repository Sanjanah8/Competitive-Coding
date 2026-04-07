#include <iostream>
using namespace std;

// Function to remove unit digits and return a new array
int* removeUnitDigits(int arr[], int N) {
    // Dynamically allocate a new array to store results
    int *newArr = new int[N];
    
    for (int index = 0; index < N; index++) {
        // Removing the unit digit is equivalent to dividing by 10
        newArr[index] = arr[index] / 10;
    }
    
    return newArr;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int index = 0; index < N; index++)
    {
        cin >> arr[index];
    }
    
    int *ptr = removeUnitDigits(arr, N);
    
    for (int index = 0; index < N; index++)
    {
        cout << ptr[index] << " ";
    }
    
    // Clean up the dynamically allocated memory
    delete []ptr;
    return 0;
}
