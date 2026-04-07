#include <iostream>
using namespace std;

class Smartphone {
    public:
        int internalMemory;
};

// Samsung inherits Smartphone protectedly
class Samsung : protected Smartphone {
    public:
        Samsung() {
            internalMemory = 64; // Set value for Samsung
            cout << internalMemory << endl;
        }
};

// Galaxy10 inherits from Samsung
class Galaxy10 : public Samsung {
    public:
        Galaxy10() {
            internalMemory = 128; // Set value for Galaxy10
            cout << internalMemory << endl;
        }
};

int main() {
    Galaxy10 g; 
    return 0;
}
