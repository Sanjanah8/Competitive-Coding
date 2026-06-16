#include <iostream>
using namespace std;

class Person {
    int age;
protected :
    int salary;
    friend void setAndPrintAgeSalary(int pAge, int pSal);
};

void setAndPrintAgeSalary(int pAge, int pSal) {
    Person p; 
    p.age = pAge;
    p.salary = pSal;

    cout << p.age << endl;
    cout << p.salary << endl;
}

int main () { 
    int age, sal;
    cin >> age >> sal;
    setAndPrintAgeSalary(age, sal); 
    return 0 ;
}
