#include <iostream>
using namespace std;

class Parent // Blank 1
{
    protected: 
    Parent()
    {
        cout << "No argument Parent" << endl;
    } 
    Parent(int n) // Blank 2
    {
        cout << n + 2 << endl; // Blank 3
    }
}; 

class Child : public Parent // Blank 4
{
    public: 
    Child()
    {
        cout << "No argument Child" << endl;
    } 
    Child(int n) : Parent(n) // Blank 5
    {
        cout << n + 1 << endl; // Blank 6
    }
}; 

int main() { 
    int N;
    cin >> N; 
    Child ch(N); 
    return 0;
}
