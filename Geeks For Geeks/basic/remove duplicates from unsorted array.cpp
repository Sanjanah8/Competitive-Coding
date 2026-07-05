class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int>result;
        unordered_set<int>seen;
        for(int num:arr){
            if(seen.count(num)==0){
                result.push_back(num);
                seen.insert(num);
            }
        }
        return result;
    }
};
