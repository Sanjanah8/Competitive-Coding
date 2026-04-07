#include <iostream>
using namespace std;

// Function to dynamically allocate an array and read N values
int* getValues(int N) {
    int *arr = new int[N];
    for (int index = 0; index < N; index++) {
        cin >> arr[index];
    }
    return arr;
}

int main() {
    int N;
    cin >> N;
    
    // Call the function to get the pointer to the array
    int *ptr = getValues(N);
    
    // Loop through the array using pointer arithmetic
    for (int index = 0; index < N; index++) {
        // Check if the integer at the current memory location is even
        if (*(ptr + index) % 2 == 0) {
            cout << *(ptr + index) << " ";
        }
    }
    
    // Free the dynamically allocated memory
    delete[] ptr;
    
    return 0;
}
