#include <iostream>
using namespace std;

class Student {
    string name; 
    int marks; 
public : 
    Student (string sName, int sMarks)
    {
        name = sName;
        marks = sMarks;
    } 
    friend void printDetails(Student stud);
};

void printDetails(Student stud) { 
    cout << stud.name << " ";
    cout << stud.marks << endl;
}

int main () { 
    string name; 
    int marks;
    cin >> name >> marks; 
    Student stud ( name, marks ) ;
    printDetails(stud); 
    return 0 ;
}
