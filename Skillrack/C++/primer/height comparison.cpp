#include <iostream>
using namespace std;

class Person
{
    int height;
public:
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height = h;
    }
    friend bool operator <(Person p1, Person p2);
    friend bool operator >(Person p1, Person p2);
};

bool operator <(Person p1, Person p2)
{
    return p1.getHeight() < p2.getHeight();
}

bool operator >(Person p1, Person p2)
{
    return p1.getHeight() > p2.getHeight();
}

int main()
{
    int height1, height2;
    cin >> height1 >> height2;
    Person person1, person2;
    person1.setHeight(height1);
    person2.setHeight(height2);

    if (person1 > person2)
    {
        cout << "Taller";
    }
    else if (person1 < person2)
    {
        cout << "Shorter";
    }
    else
    {
        cout << "Equal";
    }
    return 0;
}
