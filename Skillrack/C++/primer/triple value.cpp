#include <iostream>
using namespace std;

void tripleValue(int N)
{
    N = 3 * N;
    cout << N;
}

int main()
{
    int N;
    cin >> N;
    tripleValue(N);
    cout << endl << N;
    return 0;
}
