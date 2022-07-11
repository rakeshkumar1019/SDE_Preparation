//time=O(N)
//SPACE=O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        if(len<=1)return 0;
        int minSoFar=prices[0];
        int profit=0;
        for(int i=1;i<len;i++){
            if(prices[i]<minSoFar)minSoFar=prices[i];
            if((prices[i]-minSoFar)>profit){
                profit=prices[i]-minSoFar;
            }
        }
        return profit;
    }
};
