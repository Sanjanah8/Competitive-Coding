class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(int x:deck){
            mp[x]++;
        }
        int res=0;
        for(auto& pair:mp){
            res=gcd(res,pair.second);
        }
        return res>=2;
    }
};

//count frequency same or not
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mp;
        for (int x : deck) {
            mp[x]++;
        }
        int target_freq = mp.begin()->second;
        for (auto& pair : mp) {
            if (pair.second != target_freq) {
                return false;
            }
        }
        return target_freq > 1; 
    }
};
