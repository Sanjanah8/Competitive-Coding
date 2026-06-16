#include <iostream>
using namespace std;

class Vegetable {
public:
    virtual void printName() = 0;
    virtual int getPrice() = 0;
    int getDiscount() { return 10; }
};

class Tomato : public Vegetable {
public:
    void printName() { cout << "Tomato" << endl; }
    int getPrice() { return 50; }
};

class Brinjal : public Vegetable {
public:
    void printName() { cout << "Brinjal" << endl; }
    int getPrice() { return 70; }
};

int main()
{
    Vegetable *vegetable1 = new Tomato();
    vegetable1->printName();
    cout << vegetable1->getPrice() << endl;
    cout << vegetable1->getPrice() - vegetable1->getDiscount() << endl;
    Vegetable *vegetable2 = new Brinjal();
    vegetable2->printName();
    cout << vegetable2->getPrice() << endl;
    cout << vegetable2->getPrice() - vegetable2->getDiscount() << endl;
    return 0;
}
