#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cin >> ch;
    char *ptr = &ch; // Blank 1: Get the address
    
    cout << *&*&*ptr; // Blank 2: Dereference the pointer chain
    return 0;
}
