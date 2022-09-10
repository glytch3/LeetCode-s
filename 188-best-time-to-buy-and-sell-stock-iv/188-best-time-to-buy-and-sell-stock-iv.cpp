class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<int> holds(k+1, INT_MIN);
        vector<int> cashs(k+1, 0);
        int ans = 0;
        
        for(int price : prices){
            for(int i = k; i >= 1; i--){
                cashs[i] = max(cashs[i], holds[i]+price);
                holds[i] = max(holds[i], cashs[i-1]-price);
                ans = max(ans, cashs[i]);
            }
        }
        
        return ans;
    }
};