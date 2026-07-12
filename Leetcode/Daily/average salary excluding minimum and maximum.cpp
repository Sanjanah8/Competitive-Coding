class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size(),sum=0;
        int maximum=INT_MIN;
        int minimum=INT_MAX;
        for(int x:salary){
            sum+=x;
            maximum=max(maximum,x);
            minimum=min(minimum,x);
        }
        int remaining=sum-(maximum+minimum);
        return  (double)remaining/(n-2);
    }
};
