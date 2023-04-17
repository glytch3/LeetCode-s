class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=*max_element(candies.begin(),candies.end());
        vector<bool> ans;
        for(auto x:candies)
        {
            if(x+extraCandies>=max)
            {
                ans.insert(ans.end(),true);
            }
            else
            {
                ans.insert(ans.end(),false);
            }
        }
        return ans;
    }
};