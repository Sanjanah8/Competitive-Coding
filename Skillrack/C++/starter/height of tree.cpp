#include <iostream>
using namespace std;

void printTreeHeight(int height) {
    if (height <= 0) { // Blank 1
        throw "Height of a tree cannot be negative or zero"; // Blank 2
    }
    cout << height;
}

int main() {
    int height;
    cin >> height;
    try {
        printTreeHeight(height);
    } 
    catch (const char* msg) { // Blank 3
        cout << msg;
    }
    return 0;
}
