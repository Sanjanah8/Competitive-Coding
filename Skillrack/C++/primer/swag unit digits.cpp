#include <iostream>
using namespace std;

void swapUnitDigits(int *X, int *Y)
{ 
    int unitDigitX = *X % 10; 
    int unitDigitY = *Y % 10; 
    
    // Replace X's unit digit with Y's
    *X = (*X / 10) * 10 + unitDigitY;
    
    // Replace Y's unit digit with X's
    *Y = (*Y / 10) * 10 + unitDigitX;
} 

int main() { 
    int X, Y;
    if (!(cin >> X >> Y)) return 0;
    
    // Pass by reference using addresses
    swapUnitDigits(&X, &Y);
    
    cout << X << " " << Y; 
    return 0;
}
