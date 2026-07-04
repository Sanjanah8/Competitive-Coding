class Solution {
  public:
    int minValueToBalance(vector<int> &arr) {
        int n=arr.size(),mid=n/2,leftsum=0,rightsum=0;
        for(int i=0;i<mid;i++){
            leftsum+=arr[i];
    }
    for(int i=mid;i<n;i++){
            rightsum+=arr[i];
    }
    return abs(leftsum-rightsum);
    }
};

//other
class Solution {
  public:
    int minValueToBalance(vector<int> &arr) {
        int n = arr.size();
        int mid = n / 2;
        int leftsum = 0, rightsum = 0;
        
        // Single pass: Process left and right halves together
        for (int i = 0; i < mid; i++) {
            leftsum += arr[i];
            rightsum += arr[i + mid];
        }
        
        return abs(leftsum - rightsum);
    }
};
//other

#include <numeric>
#include <cmath>

class Solution {
  public:
    int minValueToBalance(vector<int> &arr) {
        auto mid = arr.begin() + arr.size() / 2;
        
        // Accumulate left half [begin, mid) and right half [mid, end)
        int leftsum = std::accumulate(arr.begin(), mid, 0);
        int rightsum = std::accumulate(mid, arr.end(), 0);
        
        return std::abs(leftsum - rightsum);
    }
};
