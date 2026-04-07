#include <iostream>
using namespace std;

class Laptop {
    int price;
public:
    void setPrice(int p) {
        price = p;
    }
    int getPrice() {
        return price;
    }
};

// Private inheritance makes Laptop's methods private in Acer
class Acer : private Laptop {
public:
    void setPrice(int p) {
        Laptop::setPrice(p); // Call private base method
    }
    int getPrice() {
        return Laptop::getPrice();
    }
};

class Aspire3 : public Acer {
public:
    void setPrice(int p) {
        Acer::setPrice(p); // Call Acer's version
    }
    int getPrice() {
        return Acer::getPrice();
    }
};

int main() {
    Aspire3 a;
    a.setPrice(25000);
    cout << a.getPrice();
    return 0;
}
