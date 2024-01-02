class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(nums.size() + 1);
        vector<vector<int>> ans;
        for (int a:nums) 
        {
            if (freq[a]>=ans.size()) 
            {
                ans.push_back({});
            }
            ans[freq[a]].push_back(a);
            freq[a]++;
        }
        return ans;
    }
};