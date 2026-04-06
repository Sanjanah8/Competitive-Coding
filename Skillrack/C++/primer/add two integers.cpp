#include <iostream>
using namespace std;

int val; // Global variable

int add(int val) // Local parameter val
{
    return val + ::val; // Adds local val to global ::val
}

int main()
{
    int X;
    cin >> X >> ::val; // Reads first input into X, second into global val
    cout << add(X);    // Passes X as the local 'val' to the function
    return 0;
}
