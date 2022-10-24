class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        for(auto i:nums)
            res.push_back(nums[i]);
        return res;
    }
};