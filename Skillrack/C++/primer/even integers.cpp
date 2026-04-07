#include <iostream>
using namespace std;

int val = 2; // Global variable starts at the first even number

void printEvenInteger() 
{
    cout << val << " ";
    val += 2; // Increment by 2 to get the next even number
}

int main() 
{ 
    int N;
    cin >> N; 
    for (int ctr = 1; ctr <= N; ctr++) // Loop runs N times
    {
        printEvenInteger();
    } 
    return 0;
}
