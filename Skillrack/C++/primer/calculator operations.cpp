#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
};

// Member function definitions
int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

int main() {
    int X, Y;
    if (!(cin >> X >> Y)) return 0;

    Calculator calc;
    
    // Performing operations and printing results
    cout << calc.add(X, Y) << endl;
    cout << calc.subtract(X, Y) << endl;
    cout << calc.multiply(X, Y) << endl;

    return 0;
}
