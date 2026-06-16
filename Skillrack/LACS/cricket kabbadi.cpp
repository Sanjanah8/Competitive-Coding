#include <iostream>
using namespace std;

class Game {
public:
    virtual void printGameName() = 0;
    virtual void printPlayersCount() = 0;
};

class Cricket : public Game {
public:
    void printGameName() { cout << "Cricket" << endl; }
    void printPlayersCount() { cout << "11" << endl; }
};

class Kabaddi : public Game {
public:
    void printGameName() { cout << "Kabaddi" << endl; }
    void printPlayersCount() { cout << "7" << endl; }
};

int main() {
    Game *game1 = new Cricket();
    game1->printGameName();
    game1->printPlayersCount();
    Game *game2 = new Kabaddi();
    game2->printGameName();
    game2->printPlayersCount(); 
    return 0;
}
