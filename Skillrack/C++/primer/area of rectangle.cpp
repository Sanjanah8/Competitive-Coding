#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
    
public:
    // Default constructor to initialize values
    Rectangle() {
        length = 6;
        breadth = 5;
    }

    int getArea() {
        return length * breadth;
    }
};

int main() {
    // This calls the default constructor
    Rectangle r;
    // Area will be 6 * 5 = 30
    cout << r.getArea();
    return 0;
}
