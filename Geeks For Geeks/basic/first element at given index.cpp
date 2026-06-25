class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {
        return arr.at(i);
    }
};
//other 
class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {
        return arr[i];
    }
};
//my soln
class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {
        for(int x=i;i<arr.size();i++){
            return arr[i];
        }
        return 0;
    }
};
