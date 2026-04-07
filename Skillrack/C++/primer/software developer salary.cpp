#include <iostream>
using namespace std;

class Employee {
    protected:
        int salary;
    public:
        int getSalary() {
            return salary;
        }
        void setSalary(int s) {
            salary = s;
        }
};

class SoftwareDeveloper : public Employee {
    protected:
        int bonus;
    public:
        void setSalary(int s, int b) {
            salary = s;
            bonus = b;
        }
        int getSalary() {
            return salary + bonus;
        }
};

int main() {
    int salary, bonus;
    if (!(cin >> salary >> bonus)) return 0;
    
    SoftwareDeveloper sd;
    sd.setSalary(salary, bonus);
    
    cout << sd.getSalary();
    
    return 0;
}
