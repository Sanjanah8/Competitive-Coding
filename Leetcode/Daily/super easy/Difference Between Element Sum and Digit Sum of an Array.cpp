class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum=0,digitsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            elementsum+=nums[i];
            while(nums[i]>0){
                digitsum+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(elementsum-digitsum);
    }
};
