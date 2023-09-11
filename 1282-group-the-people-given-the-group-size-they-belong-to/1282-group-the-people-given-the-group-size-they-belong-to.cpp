class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> split(501);
        int n=groupSizes.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            split[groupSizes[i]].push_back(i);
            if(split[groupSizes[i]].size()==groupSizes[i])
            {
                ans.push_back(split[groupSizes[i]]);
                split[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};