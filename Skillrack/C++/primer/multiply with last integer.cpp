#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int arr[N];
    
    // Blank 1: Standard loop to fill the array
    for (int index = 0; index < N; index++)
    {
        cin >> arr[index];
    }
    
    // Range-based for loop to process each value
    for (int val : arr)
    {
        // Blank 2: Multiply each element by the last element (arr[N-1])
        cout << val * arr[N - 1] << " ";
    }
    
    return 0;
}
