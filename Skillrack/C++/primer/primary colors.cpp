#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    switch(ch)
    {
        case 'r':
            cout << "RED";
            break;
        case 'g':
            cout << "GREEN";
            break;
        case 'b':
            cout << "BLUE";
            break;
        default:
            cout << "INVALID";
    }
    return 0;
}
