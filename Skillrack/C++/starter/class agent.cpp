#include <iostream>
#include <string>
using namespace std;

// Class definition for Agent
class Agent {
public:
    string name;   // Variable to store the agent's name
    int salary;    // Variable to store the agent's salary

    // Constructor to initialize the name and salary
    Agent(string agentName, int agentSalary) {
        name = agentName;
        salary = agentSalary;
    }
};

int main() {
    string name;
    int salary;

    // Input for agent's name and salary
    cout << "Enter the agent's name: ";
    cin >> name;
    cout << "Enter the agent's salary: ";
    cin >> salary;

    // Create an Agent object
    Agent agent(name, salary);

    // Output the agent's name and salary
    cout << agent.name << endl;
    cout << agent.salary << endl;

    return 0;
}
