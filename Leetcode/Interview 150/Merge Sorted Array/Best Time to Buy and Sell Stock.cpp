class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=INT_MAX,curr_price;
        for(int i=0;i<prices.size();i++){
            minprice=min(prices[i],minprice);
            int currentprice=prices[i]-minprice;
            maxprofit=max(maxprofit,currentprice);  
        }
         return maxprofit;
    }
   
};
