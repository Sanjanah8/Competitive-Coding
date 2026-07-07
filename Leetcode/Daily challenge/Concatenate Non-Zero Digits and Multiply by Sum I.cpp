class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        string number=to_string(n);
        char target='0';
        string result="";
        for(char c:number){
            if(c!=target){
                result+=c;
            }
        }
        if (result.empty()) {
            return 0; 
            }
        long long num = stoll(result);
        while(n>0){
            sum+=n%10;
            n=n/10;
        }
        return sum*num;
    }
};
