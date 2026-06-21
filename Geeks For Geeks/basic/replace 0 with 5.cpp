class Solution {
  public:
    int convertFive(int n) {
        string s=to_string(n);
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                s[i]='5';
            }
        }
        return stoi(s);
    }
};

//other

class Solution {
  public:
    int convertFive(int n) {
        if (n == 0) return 5;
        
        int ans = 0;
        int place = 1;
        
        while (n > 0) {
            int digit = n % 10;
            
            if (digit == 0) {
                digit = 5;
            }
            
            ans = ans + (digit * place);
            place *= 10;
            n /= 10;
        }
        
        return ans;
    }
};
