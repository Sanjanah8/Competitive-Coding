#include <iostream>
using namespace std;

// Defining 'marks' as an alias for 'int'
typedef int marks;

int main() {
    marks M;
    
    cout << "Enter marks: ";
    cin >> M;

    // Using if-else for ranges instead of switch
    if (M >= 0 && M <= 34) {
        cout << "Fail" << endl;
    } 
    else if (M >= 35 && M <= 100) {
        cout << "Pass" << endl;
    } 
    else {
        cout << "N/A" << endl;
    }

    return 0;
}
