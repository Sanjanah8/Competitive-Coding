class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){
                    return false;
                }
            }
            return true;
		}
};
