class Solution {
public:
    int fun(int n,vector<int> &dp)
    {
        if(n==0)
            return 0;
        if(n<=2)
            return 1;
        return dp[n]=fun(n-1,dp)+fun(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return fun(n,dp);
        
    }
};