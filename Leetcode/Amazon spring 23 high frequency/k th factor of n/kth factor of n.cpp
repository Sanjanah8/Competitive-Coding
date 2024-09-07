class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> x;
        for(int i = 1; i<=n ; i++)
        {
            if(n%i == 0)
            x.push_back(i);
        }
        if(!x.empty() && k<=x.size())
        return x[k-1];
        return -1;
    }
};
