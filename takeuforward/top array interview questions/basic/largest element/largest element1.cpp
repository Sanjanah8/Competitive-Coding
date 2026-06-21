class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maximum=0;
        for(int i=0;i<nums.size();i++){
            maximum=max(maximum,nums[i]);
        }
        return maximum;
    }
};
