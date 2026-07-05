class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int sum=0,maxDigitRange=0;
        for(int num:nums){
            int smallest=9,largest=0;
            int originalNum = num;
            while(num>0){
                int digit=num%10;
                smallest=min(smallest,digit);
                largest=max(largest,digit);
                num/=10;
            }
            int currentRange=largest-smallest;
            if(currentRange>maxDigitRange){
            maxDigitRange=currentRange;
            sum=originalNum;
            }
            else if((currentRange)==maxDigitRange){
                sum+=originalNum;
            }
        }
return sum;
    }
};
