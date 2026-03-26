#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    switch(ch)
    {
        default:
            cout << "Invalid"; break;
            
        case 'a' ... 'z':
            cout << "Lower Case"; break;

        case 'A' ... 'Z':
            cout << "Upper Case"; break;

        case '0' ... '9':
            cout << "Digit"; break;
    }
    return 0;
}
