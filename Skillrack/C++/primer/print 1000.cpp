#include <iostream>
using namespace std;

int val = 999; 

int main() {
    int val = 50;
    ::val++;     
    cout << ::val; 
    return 0;
}
