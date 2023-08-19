class Solution {
public:
    int f(int x,int y,vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        if(x==0 && y==0)
            return grid[0][0];
        if(x<0 || y<0)
            return 1e9;
        if(dp[x][y]!=-1)
            return dp[x][y];
        int up=1e9;
        int left=1e9;
        if(x>0)
            up=grid[x][y]+f(x-1,y,grid,dp);
        if(y>0)
            left=grid[x][y]+f(x,y-1,grid,dp);
        return dp[x][y]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int x=grid.size();
        int y=grid[0].size();
        vector<vector<int>> dp(x,vector<int> (y,-1));
        return f(x-1,y-1,grid,dp);
    }
};