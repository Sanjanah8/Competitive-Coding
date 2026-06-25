class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                count++;
            }
        }
        return count;
    }
};

//other
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // count_if returns the number of elements that satisfy the condition
        return count_if(arr.begin(), arr.end(), [x](int num) {
            return num <= x;
        });
    }
};
