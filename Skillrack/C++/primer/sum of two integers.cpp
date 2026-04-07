#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
    int *ptr1 = &num1; // Blank 1
    int *ptr2 = &num2; // Blank 2
    
    cout << (*ptr1) + (*ptr2);
    return 0;
}
