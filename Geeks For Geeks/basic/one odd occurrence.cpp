//best

class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        int res = 0;
        for (int num : arr) {
            res ^= num; // Every even occurrence cancels out to 0
        }
        return res; // Only the odd-occurring number remains
    }
};
//other 
class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int count = 1;
        
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                count++;
            } else {
                if (count % 2 != 0) {
                    return arr[i];
                }
                count = 1;
            }
        }
        
        return arr.back();
    }
};

