//best
class Solution {
  public:
    bool isEven(int n) {
        //it checks last digit of binary if 1 it is odd if 0 it is even
        return (n & 1) == 0; 
    }
};
//my code
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



 //other
class Solution {
  public:
    bool isEven(int n) {
        return (n % 2 == 0) ? true : false;
    }
};
