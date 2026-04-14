#include <iostream>
using namespace std;

class Employee {
    private:
        int entry, exit;
    public:
        Employee(int en, int ex) {
            entry = en;
            exit = ex;
        }
        ~Employee() {
            cout << (exit - entry) * 60 << " minutes";
        }
};

int main()
{
   int entry, exit ;
   cin >> entry >> exit ;
   Employee emp=Employee(entry, exit );
   cout << "Employee Work Duration is " ;
   return 0;
}
