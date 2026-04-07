#include <iostream>
using namespace std;

class Bus {
    private:
        int seats, cost;
    public:
        // Constructor to initialize seats and cost per seat
        Bus(int s, int c) {
            seats = s;
            cost = c;
        }
        // Method to return the product of seats and cost
        int getTotalCost() {
            return seats * cost;
        }
};

int main() {
    int numberOfSeats, costPerSeat;
    // Reading input values
    if (!(cin >> numberOfSeats >> costPerSeat)) return 0;
    
    // Creating object b of class Bus
    Bus b(numberOfSeats, costPerSeat);
    
    // Printing the total cost
    cout << b.getTotalCost();
    
    return 0;
}
