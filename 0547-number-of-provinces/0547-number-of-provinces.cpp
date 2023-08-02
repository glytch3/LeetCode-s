class Solution {
    private:
    void dfs(int node,vector<vector<int>>& adj,vector<int>& vis)
    {
        vis[node]=1;
        for(auto x:adj[node])
        {
            if(vis[x]==0){
                dfs(x,adj,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int N=isConnected.size();
        vector<vector<int>> adj(N);
        for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(isConnected[i][j]==1 && i!=j)
            {
                adj[i].emplace_back(j);
                adj[j].emplace_back(i);
            }
        vector<int> vis(N,0);
        int cnt=0;
        for(int i=0;i<N;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,adj,vis);
                cnt++;
            }
        }
        return cnt;
    }
};