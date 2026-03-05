#include <iostream>
using namespace std;

int main()
{
    int M; 
    cin >> M;
    switch(M)
    {
        case 0 ... 34:
            cout << "Fail";
            break;    
            
        case 35 ... 100: 
            cout << "Pass";
            break;      
            
        default:
            cout << "N/A";
    }
    return 0;
}
