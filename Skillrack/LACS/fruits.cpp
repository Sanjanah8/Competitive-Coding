#include <iostream>
using namespace std;

class Fruit {
public:
    virtual void printName() = 0;
    virtual void printPrice() = 0;
};

class Orange : public Fruit {
    void printName() {
        cout << "Orange" << endl;
    } 
    void printPrice() {
        cout << "100" << endl;
    }
};

class Grapes : public Fruit {
    void printName() {
        cout << "Grapes" << endl;
    } 
    void printPrice() {
        cout << "120" << endl;
    }
};

int main() {
    Fruit *fruit1 = new Orange();
    fruit1->printName();
    fruit1->printPrice();
    Fruit *fruit2 = new Grapes();
    fruit2->printName();
    fruit2->printPrice();
    return 0;
}
