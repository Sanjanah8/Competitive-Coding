#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N; 
    
    int marks[N]; // Blank 1

    for (int index = 0; index < N; index++)
    {
        cin >> marks[index]; // Blank 2
    } 
    
    for (int index = N - 1; index >= 0; index--) // Blank 3
    {
        cout << marks[index] << " ";
    } 
    
    return 0;
}
