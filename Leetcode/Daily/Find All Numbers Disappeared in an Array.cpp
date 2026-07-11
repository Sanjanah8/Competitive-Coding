class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        vector<int>result;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};

//best in place flipping trick 

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1; 
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
    
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};
