#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double P;
    cin >> P; 
    
    double &X = P; // Blank 1: Create a reference to P
    if (&P == &X) {
        // Blank 2: Multiply by 0.67 to get 33% discount
        cout << fixed << setprecision(3) << X * 0.67;
    } 
    return 0;
}
