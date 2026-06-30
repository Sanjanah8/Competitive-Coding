class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(const string &s : details){
            int tens=s[11]-'0';
            int ones=s[12]-'0';
            int age=(tens*10)+ones;
            if(age>60){
                count++;
            }
        }
        return count;

    }
};
