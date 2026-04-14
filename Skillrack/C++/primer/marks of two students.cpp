#include <iostream>
using namespace std;

class Student {
    private:
        int marks;

    public:
        void setMarks(int m) {
            marks = m;
        }
        int getMarks() {
            return marks;
        }
        Student operator+(Student const &obj) {
            Student res;
            res.marks = marks + obj.marks;
            return res;
        }
};

int main() {
    int m1, m2;
    if (cin >> m1 >> m2) {
        Student stud1, stud2;
        stud1.setMarks(m1);
        stud2.setMarks(m2);
        Student stud3 = stud1 + stud2;
        cout << stud3.getMarks();
    }
    return 0;
}
