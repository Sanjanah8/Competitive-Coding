class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maximum=max(maximum,nums[i]);
        }
        return maximum;
    }
};
