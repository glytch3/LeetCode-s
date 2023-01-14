class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max=*max_element(candies.begin(), candies.end());
        for(auto x:candies)
        {
            if((x+extraCandies)<max)
                ans.push_back(false);
            else
                ans.push_back(true);
        }
        return ans;
    }
};