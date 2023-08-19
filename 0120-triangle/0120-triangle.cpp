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
        vector<vector<int>> dp(x+1,vector<int>(x+1,-1));
        for(int i=0;i<x;i++)
        {
            dp[x-1][i]=triangle[x-1][i];
        }
        for(int i=x-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int u=triangle[i][j]+dp[i+1][j];
                int ul=triangle[i][j]+dp[i+1][j+1];
                dp[i][j]=min(u,ul);
            }
        }
        return dp[0][0];
    }
};

// class Solution {
// public:
//     int f(int x,int y,vector<vector<int>>& triangle,vector<vector<int>>& dp) {
//         int n=triangle.size();
//         if(x==n-1)
//             return triangle[n-1][y];
//         if(dp[x][y]!=-1)
//             return dp[x][y];
//         int d=triangle[x][y]+f(x+1,y,triangle,dp);
//         int dr=triangle[x][y]+f(x+1,y+1,triangle,dp);
//         return dp[x][y]=min(d,dr);
//     }
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int x=triangle.size();
//         vector<vector<int>> dp(x,vector<int>(x,-1));
//         return f(0,0,triangle,dp);
//     }
// };