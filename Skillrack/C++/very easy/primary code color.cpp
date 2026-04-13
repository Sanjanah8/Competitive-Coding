#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if (c == 'r' || c == 'R') cout << "RED";
    else if (c == 'g' || c == 'G') cout << "GREEN";
    else if (c == 'b' || c == 'B') cout << "BLUE";
    else cout << "UNDEFINED";
    return 0;
}
