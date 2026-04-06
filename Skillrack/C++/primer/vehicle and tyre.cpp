#include <iostream>
using namespace std;

class Vehicle {
    public:
        static int spareTyre;
        int getTotalTyres(int numOfWheels) {
            return numOfWheels + spareTyre;
        }
};

int Vehicle::spareTyre = 1; 

int main() {
    int numOfWheels;
    cin >> numOfWheels;
    Vehicle v;
    cout << v.getTotalTyres(numOfWheels);
    return 0;
}
