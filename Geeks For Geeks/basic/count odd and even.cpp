class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        int oddcount=0,evencount=0;
        for(int num:arr){
            if(num%2!=0){
                oddcount++;
            }else{
                evencount++;
            }
        }
        return {oddcount,evencount};
        
    }
};
