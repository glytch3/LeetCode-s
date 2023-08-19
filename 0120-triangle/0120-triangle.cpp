class Solution {
public:
    int f(int x,int y,vector<vector<int>>& triangle,vector<vector<int>>& dp) {
        int n=triangle.size();
        if(x==n-1)
            return triangle[n-1][y];
        if(dp[x][y]!=-1)
            return dp[x][y];
        int d=triangle[x][y]+f(x+1,y,triangle,dp);
        int dr=triangle[x][y]+f(x+1,y+1,triangle,dp);
        return dp[x][y]=min(d,dr);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int x=triangle.size();
        vector<vector<int>> dp(x,vector<int>(x,-1));
        return f(0,0,triangle,dp);
    }
};