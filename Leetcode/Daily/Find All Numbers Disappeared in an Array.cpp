class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        vector<int>result;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};
