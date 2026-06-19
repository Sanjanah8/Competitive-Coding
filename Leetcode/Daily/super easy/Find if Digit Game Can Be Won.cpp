class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int alice=0,total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            if(nums[i]<10){
                alice+=nums[i];
            }
          
        }
        int  bob=total-alice;
        return alice!=bob;
    }
};
