class Solution {
    private:
    bool check(int node,vector<int> color,vector<vector<int>>& graph)
    {
        queue<int> q;
        q.push(node);
        color[node]=0;
        while(!q.empty())
        {
            int b=q.front();
            q.pop();
            for(auto x:graph[b])
            {
                if(color[x]==-1)
                {
                    color[x]=(!color[b]);
                    q.push(x);
                }
                else if(color[x]==color[b])
                    return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
                if(!check(i,color,graph))
                    return false;
        }
        return true;
    }
};