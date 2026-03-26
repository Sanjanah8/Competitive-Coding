#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int counter = 1;

    do // First Blank: Starts the do-while loop
    {
        cout << counter << " ";
        counter++;
    } 
    while (counter <= N); // Second Blank: Condition to keep printing up to N

    return 0;
}
