#include <iostream>
using namespace std;

// First overloaded function for two integers
long add(int a, int b)
{
    return a + b;
}

// Second overloaded function for three integers
long add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << add(num1, num2) << endl;
    cout << add(num1, num2, num3);
    return 0;
}
