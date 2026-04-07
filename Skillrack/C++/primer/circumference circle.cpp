#include <iostream>
#include <iomanip>
using namespace std;

struct Circle
{ 
    double radius; 
    Circle (int diameter)
    {
        radius = diameter / 2.0; 
    } 
    
    double getCircumference () 
    { 
        return 2 * ( 22 / 7.0 ) * radius;
    } 
};

int main () { 
    int diameter;
    cin >> diameter; 
    
    // Create object and pass diameter to constructor
    Circle c(diameter);
    
    // Format output to 2 decimal places
    cout << fixed << setprecision(2) << c.getCircumference(); 
    
    return 0;
}
