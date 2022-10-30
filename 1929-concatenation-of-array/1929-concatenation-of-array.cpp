class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        /*for(int i=0;i<nums.size();i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;*/
        nums.insert( nums.end(), nums.begin(), nums.end() );
        return nums;
    }
};