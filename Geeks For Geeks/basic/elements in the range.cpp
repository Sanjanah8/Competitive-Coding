//best

class Solution {
public:
    bool checkElements(int start, int end, vector<int> &arr) {
        unordered_set<int> s(arr.begin(), arr.end());
        for (int i = start; i <= end; i++) {
            if (s.find(i) == s.end()) {
                return false; 
            }
        }
        
        return true;
    }
};

//otheer
class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=start && arr[i]<=end){
                count++;
            }
        }
        int expectedcount=end-start+1;
        return count==expectedcount;
    }
};
