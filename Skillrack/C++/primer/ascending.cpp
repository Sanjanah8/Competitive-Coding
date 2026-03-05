#include <iostream>
using namespace std;
int main()
{
    int x, Y;
    cin >> x >> Y;
    if(x % 10 == Y % 10) // Check if unit digits are equal
    {
        if(x < Y) // Ascending order
        {
            cout << x << " " << Y;
        }
        else
        {
            cout << Y << " " << x;
        }
    }
    else // Descending order
    {
        if(x > Y)
        {
            cout << x << " " << Y;
        }
        else
        {
            cout << Y << " " << x;
        }
    }
    return 0;
}
