#include <iostream>
using namespace std;

class Rectangle 
{
    public:
        int length;
        int breadth;

        int getPerimeter() 
        {
            return 2 * (length + breadth);
        }
};

int main() 
{
    Rectangle rect;
    if (!(cin >> rect.length >> rect.breadth)) return 0;
    
    cout << rect.getPerimeter();
    
    return 0;
}
