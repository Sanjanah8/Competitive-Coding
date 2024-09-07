class Solution {
    public void moveZeroes(int[] nums) {
        int n=nums.length;
        if(n<2)
        return;
        int l=0,r=1;
        while(r<n){
            if(nums[l]!=0){
            l++;
            r++;
            }
            else if(nums[r]==0){
                r++;
            }
            else
            {
                int temp=nums[r];
                nums[r]=nums[l];
                nums[l]=temp;
            }
        }
    }
}
