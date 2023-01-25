class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int prev_min = 1e4+1;
        for(int i=0; i<prices.size(); ++i){
            ans = max(ans, prices[i] - prev_min);
            prev_min = min(prev_min, prices[i]);
        }
        return ans;
    }
};