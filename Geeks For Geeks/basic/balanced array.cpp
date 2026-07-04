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
