#include <iostream>
#include <iomanip>
using namespace std;

class AverageCalculator; // Blank 1

class Student {
    int maths;
    int physics;
    int chemistry;
    friend class AverageCalculator; // Blank 2
};

class AverageCalculator {
    Student stud;
public:
    void setStudentMarks(int maths, int physics, int chemistry) {
        stud.maths = maths;
        stud.physics = physics;
        stud.chemistry = chemistry;
    }
    double getAverageMarks() {
        // Blank 3: Division by 3.0 ensures a double result for precision
        return (stud.maths + stud.physics + stud.chemistry) / 3.0;
    }
};

int main() {
    int maths, physics, chemistry;
    if (!(cin >> maths >> physics >> chemistry)) return 0;
    
    AverageCalculator avgCalc;
    avgCalc.setStudentMarks(maths, physics, chemistry);
    
    cout << fixed << setprecision(2) << avgCalc.getAverageMarks();
    return 0;
}
