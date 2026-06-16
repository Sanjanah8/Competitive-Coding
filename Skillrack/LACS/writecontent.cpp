#include <iostream>
#include <fstream>
using namespace std;

void printFileContent(string fileLocation) {
    ifstream file;
    file.open(fileLocation);
    if(file.is_open()) {
        string line;
        while(file >> line) {
            cout << line << endl;
        }
        file.close();
    }
}

void writeFileContent(string fileLocation) {
    ofstream file(fileLocation);
    string line;
    while (getline(cin, line)) {
        file << line << endl;
    }
    file.close();
}

int main() {
    string fileLocation;
    cin >> fileLocation;
    cin.ignore();
    writeFileContent(fileLocation);
    printFileContent(fileLocation);
    return 0;
}
