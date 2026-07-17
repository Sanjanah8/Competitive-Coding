class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,product=1,original=n;
        while(original>0){
            int digit=original%10;
            sum+=digit;
            product*=digit;
            original/=10;
        }
        return (n%(sum+product)==0);
    }
};
