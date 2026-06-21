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

//my code

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        vector<int>element;
        int minimum=INT_MAX;
        int maximum=INT_MIN;
        for(int i=0;i<arr.size();i++){
            minimum=min(minimum,arr[i]);
            maximum=max(maximum,arr[i]);
        }
        return {minimum,maximum};
    }
};
