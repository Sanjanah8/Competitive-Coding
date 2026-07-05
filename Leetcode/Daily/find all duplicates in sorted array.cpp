class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
            if(freq[num]==2){
                result.push_back(num);
            }
        }
        return result;
    }
};
