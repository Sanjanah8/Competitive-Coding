#include <iostream>
using namespace std;

class Parent {
protected:
    Parent() // Blank 1
    {
        cout << "No argument Parent" << endl;
    }
};

class Child : public Parent // Blank 2
{
public:
    Child() // Blank 3
    {
        cout << "No argument Child" << endl;
    }
};

int main() {
    Child obj; // Blank 4
    return 0;
}
