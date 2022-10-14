class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            find(i,nums,result);
        }
        return result;
    }
    
    void find(int j,vector<int>& nums,vector<int>& result)
    {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<nums[j])
            res++;
        }
        result.push_back(res);
    }
};