#include <iostream>
using namespace std;

void printOddInteger() 
{ 
    static int val = 1; // Initialized only once
    cout << val << " ";
    val += 2; // Increment by 2 to get the next odd number
}

int main() 
{ 
    int N;
    cin >> N; 
    for (int ctr = 1; ctr <= N; ctr++) // Loop runs N times
    {
        printOddInteger();
    } 
    return 0;
}
