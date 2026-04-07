#include <iostream>
using namespace std;

void addUnitDigit(int *N)
{
    *N = *N + (*N % 10);
}

int main()
{
    int N;
    cin >> N;
    addUnitDigit(&N);
    cout << N;
    return 0;
}
