#include <iostream>
using namespace std;

struct Batsman {
    string name;
    int runs, fours, sixes;

    // Constructor to initialize the batsman details
    Batsman(string n, int r, int f, int s) {
        name = n;
        runs = r;
        fours = f;
        sixes = s;
    }

    // Helper function to calculate boundary runs
    int getRunsFromBoundariesAndSixes() {
        return (fours * 4) + (sixes * 6);
    }

    // Function provided in the snippet
    int getRunsScoredByRunning() {
        return runs - getRunsFromBoundariesAndSixes();
    }
};

int main() {
    string name;
    int runs, fours, sixes;
    
    // Input format: name, runs, fours, sixes
    if (cin >> name >> runs >> fours >> sixes) {
        Batsman b(name, runs, fours, sixes);
        
        // Output: Name followed by runs scored by running
        cout << b.name << " " << b.getRunsScoredByRunning();
    }

    return 0;
}
