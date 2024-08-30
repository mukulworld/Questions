class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size()<2) return 0;

        int maxx=0,sum=0,l=INT_MAX;

        for(int i=0;i<prices.size();i++){
            l = min(l,prices[i]);
            sum = prices[i]- l;
            maxx = max(sum,maxx);
        }
        return maxx;  
    }
};
