class Solution {
  public:
    bool isEven(int n) {
        if(n%2==0){
            return true;
        }
        return false;
    }
};

//short

class Solution {
  public:
    bool isEven(int n) {
        return (n % 2 == 0);
    }
};
