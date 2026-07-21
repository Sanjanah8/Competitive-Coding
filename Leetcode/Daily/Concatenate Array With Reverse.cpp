//good
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> result = nums; 
        for (int i = nums.size() - 1; i >= 0; i--) {
            result.push_back(nums[i]);
        }
        
        return result;
    }
};
//other
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n]=nums[n-i-1];
        }
        return ans;
        
    }
};
