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
