#include <iostream>
using namespace std;

int val; // This is X (the number to find multiples of)

int main() {
    int n; // This is N (the count)
    // The code structure provided: cin >> val >> ______
    // Since 'val' is declared globally, we read N into a local variable
    cin >> val >> n; 

    for (int ctr = 1; ctr <= n; ctr++) {
        // Multiplies the current counter by the value X
        cout << ctr * val << " ";
    }
    
    return 0;
}
