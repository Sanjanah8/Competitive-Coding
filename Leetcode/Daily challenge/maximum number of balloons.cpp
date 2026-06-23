//best 
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int f[26] = {0};
        for (char c : text) {
            f[c - 'a']++;
        }
        return min({f['b' - 'a'], f['a' - 'a'], f['l' - 'a'] / 2, f['o' - 'a'] / 2, f['n' - 'a']});
    }
};
//my previous

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for (char ch : text) {
            mp[ch]++;
        }
        int ans = min({
            mp['b'],
            mp['a'],
            mp['l'] / 2,
            mp['o'] / 2,
            mp['n']
        });
        return ans;
    }
};
