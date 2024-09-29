#include <iostream>
#include <string>

class Juice {
public:
    std::string name; // Variable to store the juice name
    int price;        // Variable to store the juice price

    // Constructor to initialize the juice details
    Juice(const std::string& juiceName, int juicePrice) {
        name = juiceName;
        price = juicePrice;
    }

    // Member function to calculate total price for 5 juices
    int totalPrice() const {
        return price * 5;
    }
};

int main() {
    std::string juiceName; // Variable to store user input for juice name
    int juicePrice;        // Variable to store user input for juice price

    // Input the name and price of the juice
    std::cout << "Enter the name of the juice: ";
    std::getline(std::cin, juiceName); // Read the juice name
    std::cout << "Enter the price of the juice: ";
    std::cin >> juicePrice; // Read the juice price

    // Create a Juice object using the constructor
    Juice* juice = new Juice(juiceName, juicePrice); // Dynamically allocate memory for Juice object

    // Print the juice name and total price for 5 juices
    std::cout << juice->name << ", " << juice->totalPrice() << std::endl;

    // Free the allocated memory
    delete juice;

    return 0;
}
