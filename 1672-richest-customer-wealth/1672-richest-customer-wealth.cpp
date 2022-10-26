class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        auto high=0;
        for(auto a:accounts)
        {
            int c=0;
            for(auto b:a)
            {
                c=c+b;
            }
            if(c>high)
                high=c;
        }
        return high;
    }
};