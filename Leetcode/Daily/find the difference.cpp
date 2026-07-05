class Solution {
public:
    char findTheDifference(string s, string t) {
        char result=0;
        for(char ch : s){
            result^=ch;
        }
            for(char ch:t){
                result^=ch;

        }
        return result;
        
    }
};

//other 
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        // Add up all the character values in t
        for (char ch : t) {
            sum += ch;
        }
        // Subtract all the character values in s
        for (char ch : s) {
            sum -= ch;
        }
        // The remaining value is the ASCII code of the added character
        return (char)sum;
    }
};
//best

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> counts;
        for (char ch : s) {
            counts[ch]++;
        }
        for (char ch : t) {
            if (counts[ch] == 0) {
                return ch;
            }
            counts[ch]--;
        }
        
        return ' '; 
    }
};
