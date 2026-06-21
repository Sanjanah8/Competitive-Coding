class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        if (arr.empty()) 
          return {};
        int minimum = arr[0];
        int maximum = arr[0];
        for (const int &num : arr) {
            if (num < minimum) {
                minimum = num;
            } else if (num > maximum) {
                maximum = num;
            }
        }
        
        return {minimum, maximum}; 
    }
};
