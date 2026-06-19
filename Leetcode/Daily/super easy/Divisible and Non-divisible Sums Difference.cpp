class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;
        int k=n/m;
        for(int i=1;i<=n;i++){
            num1=(k*(m+(k*m)))/2;
            int total=(n*(n+1))/2;
            num2=total-num1;
        }
        return num2-num1;
    }
};
