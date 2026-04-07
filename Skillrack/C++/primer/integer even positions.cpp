#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    
    for (int index = 0; index < N; index++) {
        // Blank 1: Store input in current array address
        cin >> *(arr + index); 
    }
    
    // Blank 2: Start from the highest odd index (even position)
    for (int index = (N % 2 == 0 ? N - 1 : N - 2); index >= 1; index -= 2) {
        // Blank 3 & 4: Dereference the pointer at that index
        cout << *(arr + index) << " ";
    }
    
    return 0;
}
