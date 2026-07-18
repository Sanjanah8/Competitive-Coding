class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(nums1.begin(),nums1.end());
        vector<int>result;
        for(int num:nums2){
            if(s1.count(num)){
                result.push_back(num);
                s1.erase(num);
            }
        }
        return result;
    }
};
