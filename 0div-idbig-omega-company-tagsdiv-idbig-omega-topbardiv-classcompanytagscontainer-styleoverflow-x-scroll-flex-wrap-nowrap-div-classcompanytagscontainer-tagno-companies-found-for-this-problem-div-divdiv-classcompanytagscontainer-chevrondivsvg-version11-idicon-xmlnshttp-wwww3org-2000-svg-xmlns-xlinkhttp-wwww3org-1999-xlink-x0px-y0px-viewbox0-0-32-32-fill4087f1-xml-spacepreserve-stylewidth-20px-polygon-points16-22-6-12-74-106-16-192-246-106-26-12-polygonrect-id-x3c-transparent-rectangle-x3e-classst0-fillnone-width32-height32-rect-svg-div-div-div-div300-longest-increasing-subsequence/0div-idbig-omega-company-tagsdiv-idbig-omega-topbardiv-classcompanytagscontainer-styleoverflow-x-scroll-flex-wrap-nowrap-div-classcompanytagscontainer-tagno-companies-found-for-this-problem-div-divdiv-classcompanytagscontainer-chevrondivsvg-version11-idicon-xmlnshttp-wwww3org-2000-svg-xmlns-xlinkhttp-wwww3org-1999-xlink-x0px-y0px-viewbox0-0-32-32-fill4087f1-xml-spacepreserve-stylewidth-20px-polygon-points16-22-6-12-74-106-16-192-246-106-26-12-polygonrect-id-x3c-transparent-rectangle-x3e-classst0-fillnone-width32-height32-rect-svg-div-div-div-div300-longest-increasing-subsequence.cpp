class Solution {
public:
    int f(int cur,int prev,vector<int>& nums,int n,vector<vector<int>>&dp)
    {
        if(cur==n)
        {
            return 0;
        }
        if(dp[cur][prev+1]!=-1)
        {
            return dp[cur][prev+1];
        }
        int len=f(cur+1,prev,nums,n,dp);
        if(prev==-1||nums[cur]>nums[prev])
        {
            len=max(len,1+f(cur+1,cur,nums,n,dp));
        }
        return dp[cur][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return f(0,-1,nums,n,dp);
    }
};
