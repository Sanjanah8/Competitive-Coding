class Solution {
  public:
    int product(int arr[], int n) {
        int mul=1;
        for(int i=0;i<n;i++){
            mul*=arr[i];
        }
        return mul;
    }
};
