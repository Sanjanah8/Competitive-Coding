class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>index;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            for(int j=0;j<str.size();j++){
                if(str[j]==x){
                    index.push_back(i);
                    break;
                }
            }
        }
       return index; 
    }
};
