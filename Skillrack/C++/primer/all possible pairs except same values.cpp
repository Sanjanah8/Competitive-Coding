#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N; 
    for (int val1 = 1; val1 <= N; val1++)
    { 
        for (int val2 = 1; val2 <= N; val2++)
        { 
            if (val1 == val2)
            { 
                continue; 
            }
            cout << val1 << " " << val2 << endl;
        }
    } 
    return 0;
}
