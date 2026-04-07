#include <iostream>
using namespace std;

class Square {
    private:
        int side;
    public:
        // Regular constructor
        Square(int s) {
            side = s;
        }
        // Copy constructor: doubles the side of the passed object
        Square(const Square &obj) {
            side = obj.side * 2;
        }
        // Returns the area (side * side)
        int getArea() {
            return side * side;
        }
};

int main() {
    int side;
    cin >> side;
    
    // s1 is created with the input side
    Square s1(side);
    // s2 is created using s1 (triggers the copy constructor)
    Square s2(s1);
    
    cout << s1.getArea() << endl;
    cout << s2.getArea();
    
    return 0;
}
