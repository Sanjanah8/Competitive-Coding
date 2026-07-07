class Solution {
  public:
    int multiply(vector<int> &arr) {
        int leftsum=0,rightsum=0;
        int mid=(arr.size()/2)-1;
        for(int i=0;i<=mid;i++){
            leftsum+=arr[i];
        }
        for(int i=mid+1;i<arr.size();i++){
            rightsum+=arr[i];
        }
        return leftsum*rightsum;
        
    }
};
