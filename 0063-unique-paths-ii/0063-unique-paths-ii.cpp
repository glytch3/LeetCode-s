class Solution {
public:
    int f(int m,int n,vector<vector<int>>& ob,vector<vector<int>>& dp)
    {
        if(m==0 && n==0)
            return 1;
        if(ob[m][n]==1)
        {
            dp[m][n]=0;
            return 0;
        }
        if(dp[m][n]!=-1)
            return dp[m][n];
        int up=0;
        int left=0;
        if(m>0) up=f(m-1,n,ob,dp);
        if(n>0) left=f(m,n-1,ob,dp);
        return dp[m][n]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int m=ob.size();
        int n=ob[0].size();
        if(m==1 && n==1)
            return !ob[0][0];
        if(ob[m-1][n-1]==1  || ob[0][0]==1)
            return 0;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,ob,dp);
    }
};