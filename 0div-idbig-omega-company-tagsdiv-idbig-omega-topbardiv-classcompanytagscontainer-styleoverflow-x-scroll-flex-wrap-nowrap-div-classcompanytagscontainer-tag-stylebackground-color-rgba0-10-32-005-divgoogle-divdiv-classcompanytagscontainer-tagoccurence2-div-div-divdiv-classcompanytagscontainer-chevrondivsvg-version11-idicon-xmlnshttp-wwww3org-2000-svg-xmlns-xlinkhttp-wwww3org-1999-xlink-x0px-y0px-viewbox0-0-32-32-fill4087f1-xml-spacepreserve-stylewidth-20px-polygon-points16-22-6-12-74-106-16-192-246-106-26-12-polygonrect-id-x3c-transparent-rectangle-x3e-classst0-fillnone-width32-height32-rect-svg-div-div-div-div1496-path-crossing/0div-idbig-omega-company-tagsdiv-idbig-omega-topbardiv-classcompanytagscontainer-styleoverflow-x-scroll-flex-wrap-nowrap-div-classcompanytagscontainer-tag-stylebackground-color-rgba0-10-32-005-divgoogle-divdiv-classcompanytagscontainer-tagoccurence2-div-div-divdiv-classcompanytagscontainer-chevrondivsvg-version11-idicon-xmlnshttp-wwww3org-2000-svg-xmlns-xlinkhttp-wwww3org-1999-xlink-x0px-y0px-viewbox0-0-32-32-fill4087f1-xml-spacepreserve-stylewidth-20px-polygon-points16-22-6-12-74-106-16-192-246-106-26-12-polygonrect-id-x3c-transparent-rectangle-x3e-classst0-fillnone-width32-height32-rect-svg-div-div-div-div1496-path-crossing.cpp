class Solution {
public:
    struct pair_hash {
        template <class T1, class T2>
        std::size_t operator () (const std::pair<T1, T2>& p) const {
            auto h1 = std::hash<T1>{}(p.first);
            auto h2 = std::hash<T2>{}(p.second);

            // Simple hash function for pairs
            return h1 ^ h2;
        }
    };
    
    bool isPathCrossing(string path) {
        unordered_set<pair<int, int>, pair_hash> vis;
        pair<int,int> pos;
            pos.first=0;
            pos.second=0;
        vis.insert(pos);
        for(auto x:path)
        {    
            if(x=='N')
                pos.second++;
            else if(x=='S')
                pos.second--;
            else if(x=='E')
                pos.first++;
            else //west
                pos.first--;

            if(vis.find(pos)!=vis.end())
                return true;
            
            vis.insert(pos);
        }
        return false;
    }
};