#include <iostream>
using namespace std;

int N; // Global variable to store the input size

void print1toN() 
{ 
    for (int ctr = 1; ctr <= N; ctr++) 
    {
        cout << ctr << " ";
    }
}

int main() 
{
    cin >> N; 
    for (int ctr = 1; ctr <= N; ctr++)
    {
        print1toN();
        cout << endl;
    } 
    return 0;
}
