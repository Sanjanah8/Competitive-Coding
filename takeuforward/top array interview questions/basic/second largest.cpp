class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = -1;
        int second_largest = -1;
        
        for (int num : nums) {
            if (num > largest) {
                second_largest = largest;
                largest = num;
            } 
            else if (num < largest && num > second_largest) {
                second_largest = num;
            }
        }
        
        return second_largest;
    }
};
