#include <iostream>
using namespace std;

void multiply(int X, int Y)
{
    X = X * Y;
    cout << X;
}

int main()
{
    int X;
    cin >> X;
    if (X % 2 == 0)
    {
        multiply(X, 2);
        cout << " = " << X << " * 2";
    }
    else
    {
        multiply(X, 5);
        cout << " = " << X << " * 5";
    }
    return 0;
}
