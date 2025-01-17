#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int dataTypeSize(string str) {
        if (str == "Character") {
            return sizeof(char);
        } else if (str == "Integer") {
            return sizeof(int);
        } else if (str == "Long") {
            return sizeof(long);
        } else if (str == "Float") {
            return sizeof(float);
        } else if (str == "Double") {
            return sizeof(double);
        } else if (str == "Short") {
            return sizeof(short);
        } else if (str == "LongLong") {
            return sizeof(long long);
        }
        return -1; // If the data type is not recognized
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str) << endl;
    }
    return 0;
}
