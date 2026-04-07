#include <iostream>
using namespace std;

class Car {
    public: // Blank 1: Allows children to access the member
        int distanceTravelled;
};

class Toyota : public Car // Blank 2: Inheritance from Car
{
    public:
        Toyota() {
            distanceTravelled = 100;
        }
};

class Corolla : public Toyota 
{
    public:
        Corolla() {
            distanceTravelled = 150; // Blank 3: Set value to 150
        }
};

int main() {
    Toyota t;
    cout << t.distanceTravelled << endl; // Prints 100

    Corolla c;
    cout << c.distanceTravelled; // Prints 150
    
    return 0;
}
