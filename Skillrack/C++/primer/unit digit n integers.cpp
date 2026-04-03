#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int arr[N];
    
    // Blank 1
    for (int index = 0; index < N; index++)
    {
        cin >> arr[index];
    }

    // Blank 2
    for (int val : arr)
    {
        cout << val % 10 << " ";
    }
    
    return 0;
}
