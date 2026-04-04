#include <iostream>
using namespace std;

class Square
{
    int side;
    
    public: // Access specifier to make members accessible outside the class

    Square(int s)
    {
        side = s; // Assigning the input value to the private member 'side'
    }

    int getArea() // Method to return the area
    {
        return side * side;
    }

    int getPerimeter() // Method to return the perimeter
    {
        return 4 * side;
    }
};

int main()
{
    int side;
    cin >> side; // Taking side as input from the user

    Square sq(side); // Creating an object 'sq' of class Square

    cout << sq.getArea() << endl;      // Printing the area
    cout << sq.getPerimeter() << endl; // Printing the perimeter

    return 0;
}
