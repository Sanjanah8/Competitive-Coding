class Solution {
  public:
    string compareFive(int n) {
        if(n>5){
            return "Greater than 5";
        }else if(n<5){
            return "Less than 5";
        }
            else{
                return "Equal to 5";
            }
    }
};
