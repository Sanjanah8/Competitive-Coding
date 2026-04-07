#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    private:
        string name;
        int p, c, m;
    public:
        // Constructor to initialize name and marks
        Student(string n, int physics, int chemistry, int maths) {
            name = n;
            p = physics;
            c = chemistry;
            m = maths;
        }
        // Method to calculate average as a double
        double getAverage() {
            return (p + c + m) / 3.0;
        }
};

int main() {
    string name;
    int physics, chemistry, maths;
    // Reading input
    cin >> name >> physics >> chemistry >> maths;
    
    // Creating Student object
    Student s1(name, physics, chemistry, maths);
    
    // Output formatting
    cout << name << " ";
    cout << fixed << setprecision(2) << s1.getAverage();
    
    return 0;
}
