class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto& pair:mp){
            if(pair.second==1){
                return pair.first;
            }
        }
        return 0;
    }
};
