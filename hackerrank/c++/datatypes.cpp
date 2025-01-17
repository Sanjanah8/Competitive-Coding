#include <iostream>
#include <cstdio>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    // Set precision for floating-point numbers
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;
    
    return 0;
}
