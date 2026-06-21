//Time Complexity: NlogN due to introsort
class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[0];
    }
};
