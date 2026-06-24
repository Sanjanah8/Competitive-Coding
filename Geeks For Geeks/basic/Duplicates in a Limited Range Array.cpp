class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int>res;
        for(int i=0;i<(int)arr.size();i++){
          int val=abs(arr[i]);
          int index=val-1;
          if(arr[index]<0){
              res.emplace_back(val);
          }else{
              arr[index]=-arr[index];
          }
        }
        return res;
    }
};
