class Solution {
public:
    int fun(int n,vector<int> &dp,vector<int>& cost)
    {
        if (n < 0) return 0;
        if (n==0 || n==1) return cost[n];
        if (dp[n] != -1) return dp[n];
        int a = fun(n - 1, dp, cost);
        int b = fun(n - 2, dp, cost);
        return dp[n] = min(a, b) + cost[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size()-1;
        vector<int> dp(n+1,-1);
        return min(fun(n,dp,cost),fun(n-1,dp,cost));
    }
};