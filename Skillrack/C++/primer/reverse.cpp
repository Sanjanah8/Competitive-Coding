#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int counter = x;
    while (counter >= 10)
    {
        cout << counter << " ";
        counter--;
    }
    return 0;
}
