class Solution {
  public:
    int countElements(vector<int>& arr) {
      if (arr.empty()) return 0;
        int count=1;
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
                count++;
                
    
            }
        }
            return count;
    }
};
