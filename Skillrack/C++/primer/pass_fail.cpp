#include <iostream>
using namespace std;

typedef int marks;

int main()
{
    marks M;
    cin >> M;

    switch(M/35)
    {
        case 0:
            cout << "Fail";
            break;

        case 1:
        case 2:
            cout << "Pass";
            break;

        default:
            cout << "N/A";
    }

    return 0;
}
