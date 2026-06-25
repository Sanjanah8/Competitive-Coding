class Solution {
  public:
    int findSum(vector<int>& arr) {
        unordered_map<int,int>freq;
        int sum=0;
        for(int num:arr){
            if(freq[num]==0){
                sum+=num;
            }
            freq[num]++;
        }
        return sum;
    }
};
