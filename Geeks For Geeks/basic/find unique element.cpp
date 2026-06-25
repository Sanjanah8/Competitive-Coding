//best
class Solution {
public:
    int findUnique(int k, vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        for (auto const& pair : freq) {
          int num = pair.first;    
          int count = pair.second; 
    
          if (count % k != 0) {
              return num;
    }
}
        
        return -1;
    }
};
//my code
class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int count = 1;
        
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                count++;
            } else {
                if (count % k!= 0) {
                    return arr[i];
                }
                count = 1;
            }
        }
        
        return arr.back();
    }
};
