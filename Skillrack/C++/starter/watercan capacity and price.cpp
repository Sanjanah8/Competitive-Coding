#include <iostream>
using namespace std;

struct WaterCan 
{ 
    int capacity; 
    int pricePerLitre; 
    
    int getTotalPrice() 
    { 
        return capacity * pricePerLitre;
    } 
}; 

int main() {
    WaterCan waterCan;
    // Direct access requires 'public'
    cin >> waterCan.capacity >> waterCan.pricePerLitre;
    cout << waterCan.getTotalPrice(); 
    return 0;
}
