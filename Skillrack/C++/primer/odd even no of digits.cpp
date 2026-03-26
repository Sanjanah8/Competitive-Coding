#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // We use abs(N) to handle negative numbers if the test cases include them
    int val = (N < 0) ? -N : N;

    if(N % 2 == 0) 
    {
        if(val <= 9)
        {
            cout << "Single digit even";
        }
        else if (val <= 99)
        {
            cout << "Two digit even";
        }
        else 
        {
            cout << "Three or more digits even";
        }
    }
    else 
    {
        if(val <= 9)
        {
            cout << "Single digit odd";
        }
        else if (val <= 99)
        {
            cout << "Two digit odd";
        }
        else 
        {
            cout << "Three or more digits odd";
        }
    }

    return 0;
}
