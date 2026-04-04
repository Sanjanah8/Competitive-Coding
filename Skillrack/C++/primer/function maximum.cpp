#include <iostream>
using namespace std;

// Function definition for maximum
int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    int num1, num2;
    if (cin >> num1 >> num2) {
        cout << maximum(num1, num2);
    }
    return 0;
}
