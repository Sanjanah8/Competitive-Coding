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

//manual

class Solution {
  public:
    int countSquares(int n) {
        long long target = n - 1;
        long long low = 0, high = target;
        long long ans = 0;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (mid * mid <= target) {
                ans = mid;   
                low = mid + 1; 
            } else {
                high = mid - 1; 
            }
        }
        return ans;
    }
};
