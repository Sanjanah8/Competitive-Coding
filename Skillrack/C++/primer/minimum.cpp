#include <iostream>
using namespace std;

int minimum(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    
    // Blank 1
    cout << minimum(X, Y) << endl;
    
    // Blank 2
    cout << minimum(minimum(X, Y), Z);
    
    return 0;
}
