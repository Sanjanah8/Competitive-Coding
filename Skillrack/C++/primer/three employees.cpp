#include <iostream>
using namespace std;

class Team {
    private:
        int id1, id2, id3;
    public:
        // Constructor for 1 ID
        Team(int a) {
            id1 = a; 
            id2 = -1; 
            id3 = -1;
        }
        // Constructor for 2 IDs
        Team(int a, int b) {
            id1 = a; 
            id2 = b; 
            id3 = -1;
        }
        // Constructor for 3 IDs
        Team(int a, int b, int c) {
            id1 = a; 
            id2 = b; 
            id3 = c;
        }
        // Method name must match exactly: printEmployeeIds
        void printEmployeeIds() {
            cout << id1 << " " << id2 << " " << id3;
        }
};

int main() {
    int N;
    cin >> N;
    int id1, id2, id3;
    
    if (N == 1) {
        cin >> id1;
        Team t(id1);
        t.printEmployeeIds();
    }
    else if (N == 2) {
        cin >> id1 >> id2;
        Team t(id1, id2);
        t.printEmployeeIds();
    }
    else {
        cin >> id1 >> id2 >> id3;
        Team t(id1, id2, id3);
        t.printEmployeeIds();
    }
    
    return 0;
}
