//best
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            if(nums[i]==original){
                original*=2;
                i=0;
            }
            else i++;
        }
        return original;
    }
};
//my 
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool found = true;
        
        while (found) {
            found = false;
            
            for (int i : nums) {
                if (i == original) {
                    original *= 2;
                    found = true;
                    break;
                }
            }
        }
        
        return original;
    }
};

//other

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>numsset(nums.begin(),nums.end());
        while(numsset.count(original)){
            original*=2;
        }
        return original;
    }
};
