class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        arr.insert(arr.begin()+index,val);
    }
};
//manual
class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        vector<int>temp;
        for(int i=0;i<index;i++){
            temp.push_back(arr[i]);
        }
        temp.push_back(val);
        for(int i=index;i<arr.size();i++){
            temp.push_back(arr[i]);
        }
        arr=temp;
    }
};
