#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> numbers;
    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        numbers.push_back(val);
    }
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}
