//use long long mostly 
//my code
class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        sort(arr.rbegin(),arr.rend());
        for(int i:arr){
           return arr[0]*arr[1];
        }
        return 0;
    }
};

//other 
class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int num : arr) {
            if (num > max1) {
                max2 = max1; // Old largest becomes second largest
                max1 = num;  // Update largest
            } else if (num > max2) {
                max2 = num;  // Update second largest
            }
        }
  //other
      class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        int max1 = 0, max2 = 0;
        
        for (int num : arr) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else {
                max2 = max(max2, num);
            }
        }
        
        return max1 * max2;
    }
};

        return max1 * max2;
    }
};
