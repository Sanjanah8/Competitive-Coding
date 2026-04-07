#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length, breadth;
    public:
        // Constructor to initialize length and breadth
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }
        // Method to calculate and return the area
        int getArea() {
            return length * breadth;
        }
};

int main() {
    int length, breadth;
    cin >> length >> breadth;
    // Creating object r1 of class Rectangle
    Rectangle r1(length, breadth);
    // Printing the result of getArea()
    cout << r1.getArea();
    return 0;
}
