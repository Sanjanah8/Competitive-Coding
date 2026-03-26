#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N % 2 == 0)  // Even
    {
        if ((N >= -9 && N <= 9))
        {
            cout << "Single digit even";
        }
        else if ((N >= -99 && N <= 99))
        {
            cout << "Two digit even";
        }
        else
        {
            cout << "Three or more digits even";
        }
    }
    else  // Odd
    {
        if ((N >= -9 && N <= 9))
        {
            cout << "Single digit odd";
        }
        else if ((N >= -99 && N <= 99))
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
