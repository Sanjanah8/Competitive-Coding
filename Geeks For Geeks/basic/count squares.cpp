class Solution {
  public:
    int countSquares(int n) {
        return sqrt(n-1);
    }
};
// for understanding
class Solution {
  public:
    int countSquares(int n) {
        long long i = 1;
        while (i * i < n) {
            i++;
        }
        return i - 1; 
    }
};
