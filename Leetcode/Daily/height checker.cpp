class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int>expected(heights.begin(),heights.end());
        sort(expected.begin(),expected.end());
        for(int i=0;i<=heights.size()-1;i++){
            if(heights[i]!=expected[i]){
                count++;
            }
        }
        return count;
    }
};
