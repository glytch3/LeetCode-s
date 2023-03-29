class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i=i+2)
        {
            ans.insert(ans.end(),nums[i],nums[i+1]); // position , value , no. of values
        }
        return ans;
    }
};