#include <iostream>
using namespace std;

void swapIntegerValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;
    
    swapIntegerValues(a, b);
    
    cout << a << " " << b;
    return 0;
}
