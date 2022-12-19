class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> G(n);
        for (auto &e : edges) {
            G[e[0]].push_back(e[1]);
            G[e[1]].push_back(e[0]);
        }
        vector<bool> seen(n);
        seen[source] = true;
        queue<int> q{{source}};
        while (q.size()) {
            int u = q.front();
            q.pop();
            if (u == destination) return true;
            for (int v : G[u]) {
                if (seen[v]) continue;
                q.push(v);
                seen[v] = true;
            }
        }
        return false;
    }
};