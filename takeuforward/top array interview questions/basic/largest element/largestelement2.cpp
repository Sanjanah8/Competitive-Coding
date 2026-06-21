class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxElement = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxElement) {
                maxElement = nums[i];
            }
        }
        
        return maxElement;
    }
};
