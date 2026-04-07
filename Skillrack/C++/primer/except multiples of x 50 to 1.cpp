#include <iostream>
using namespace std;

int main() 
{
    int X;
    cin >> X; 
    for (int counter = 50; counter >= 1; counter--)
    { 
        if (counter % X == 0)
        { 
            continue; 
        }
        cout << counter << " ";
    } 
    return 0;
}
