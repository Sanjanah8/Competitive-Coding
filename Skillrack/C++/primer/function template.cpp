#include <iostream>
#include <iomanip>
using namespace std;

// 1. Template declaration
template <typename T>

// 2. Function template definition
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int A, B;
    float X, Y;
    
    // Read input values
    cin >> A >> B >> X >> Y;
    
    // Output integer sum
    cout << add(A, B) << endl;
    
    // 3. Output float sum with 2 decimal places
    cout << fixed << setprecision(2) << add(X, Y);
    
    return 0;
}
