class Solution {
  public:
    string longest(vector<string>& arr) {
        string longestname="";
         for(int i=0;i<arr.size();i++){
                if(arr[i].size()>longestname.size()){
                    longestname=arr[i];
                }
        }
        return longestname;
    }
};
