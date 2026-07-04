class Solution {
  public:
    void insertAtEnd(vector<int> &arr, int val) {
        arr.push_back(val);
      // arr.emplace_back(val);
      //arr.insert(arr.end(), val);
    }
};

//other 

class Solution {
public:
    void insertAtEnd(vector<int> &arr, int val) {
        arr.resize(arr.size() + 1); // Expand the size by 1
        arr.back() = val;           // Assign val to the last element
    }
};

//other 2

class Solution {
public:
    void insertAtEnd(vector<int> &arr, int val) {
        int oldSize = arr.size();
        arr.resize(oldSize + 1);
        arr[oldSize] = val; // The new element is at the old size index
    }
};
