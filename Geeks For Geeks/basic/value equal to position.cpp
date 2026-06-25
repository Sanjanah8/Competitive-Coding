class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        vector<int>a;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==(i+1)){
                a.push_back(arr[i]);

            }
        }
        return a;
    }
};

//other

class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        vector<int> a;
        int pos = 1;
        
        for (int val : arr) {
            if (val == pos) {
                a.push_back(val);
            }
            pos++;
        }
        
        return a;
    }
};
