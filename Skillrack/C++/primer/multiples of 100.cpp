#include <iostream>
using namespace std;

void printMultiplesOfHundred()
{ 
    int num = 100;
    { 
        int num = 200;
        { 
            int num = 300;
            cout << num << endl; // Accesses the innermost scope (300)
        }
        cout << num << endl;     // Accesses the middle scope (200)
    }
    cout << num;                 // Accesses the outer scope (100)
}

int main()
{
    printMultiplesOfHundred();
    return 0;
}
