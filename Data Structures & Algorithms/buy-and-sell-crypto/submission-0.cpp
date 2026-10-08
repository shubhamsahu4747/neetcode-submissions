class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n= prices.size();
        int res =0;

        for(int i =0;i < n; i++){
            int buy =prices[i];
            for(int j=i+1;j <n;j++){
                int sell = prices[j];
                res = max(res,sell-buy);
            }
        }

        return res;
        
    }
};
