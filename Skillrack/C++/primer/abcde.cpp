#include <iostream>
using namespace std;

int main() 
{
    char arr[] = { 'a', 98, 'c', 100, 'e' }; 

    for (auto ch : arr)
    {
        cout << ch;
    }
    
    return 0;
}
