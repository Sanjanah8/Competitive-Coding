class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            string original=words[i];
            string reversedword=original;
            reverse(reversedword.begin(),reversedword.end());
            if(original==reversedword){
                return original;
            }
        }
        return "";
    }
};
