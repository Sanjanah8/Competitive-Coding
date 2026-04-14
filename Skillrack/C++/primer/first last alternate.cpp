#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> numbers;

    int currVal, ctr = 1;
    while (ctr <= N) {
        cin >> currVal;
        numbers.push_back(currVal);
        ctr++;
    }

    vector<int> revisedValues;
    int left = 0, right = N - 1; 
    while (left <= right) {
        revisedValues.push_back(numbers.at(left));
      
        if (left != right) {
            revisedValues.push_back(numbers.at(right));
        }
        
        left++;
        right--;
    }

    for (int num : revisedValues) {
        cout << num << " ";
    }

    return 0;
}
