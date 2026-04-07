#include <iostream>
using namespace std;

int main() 
{
    int X, Y;
    cin >> X >> Y; 
    for (int counter = 1; true; counter++) 
    {
        cout << counter << " ";
        if(counter == 100 || counter == X || counter == Y) 
        { 
            break; 
        }
    } 
    return 0;
}
