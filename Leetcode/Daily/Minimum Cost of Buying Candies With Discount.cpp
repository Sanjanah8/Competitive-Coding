class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int maxcost=0;
        sort(cost.begin(),cost.end(),greater<int>());
        for(int i=0;i<cost.size();i+=3){
            maxcost+=cost[i];
            //i+3;
        if(i+1<cost.size()){
            maxcost+=cost[i+1];
        }

        }
    return maxcost;
    }
};
