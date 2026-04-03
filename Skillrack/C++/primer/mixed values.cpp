#include <iostream>
using namespace std;

int main() 
{
    double arr[] = { 10, 5.5, 4.7, 333, 99.99 };

    for (double val : arr)
    {
        cout << val << " ";
    }
    return 0;
}
