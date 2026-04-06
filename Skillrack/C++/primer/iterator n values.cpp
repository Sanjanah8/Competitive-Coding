#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> numbers;

    int currVal;
    for(int ctr=1; ctr<=N; ctr++){
        cin >> currVal;
        numbers.push_back(currVal);
    }

    for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(vector<int>::reverse_iterator rit = numbers.rbegin(); rit != numbers.rend(); rit++){
        cout << *rit << " ";
    }
    return 0;
}
