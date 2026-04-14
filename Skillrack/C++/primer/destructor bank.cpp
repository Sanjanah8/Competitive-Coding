#include <iostream>
using namespace std;

class Bank {
    private:
        int open, close;
    public:
        Bank(int openH, int closeH) {
            open = openH;
            close = closeH;
            cout << "Bank opened at " << open << endl;
        }
        ~Bank() {
            cout << "Bank closed at " << close << endl;
        }
};

int main() {
    int openH, closeH;
    cin >> openH >> closeH;
    Bank bank = Bank(openH, closeH);
    cout << "When will the bank close?" << endl;
    return 0;
}
