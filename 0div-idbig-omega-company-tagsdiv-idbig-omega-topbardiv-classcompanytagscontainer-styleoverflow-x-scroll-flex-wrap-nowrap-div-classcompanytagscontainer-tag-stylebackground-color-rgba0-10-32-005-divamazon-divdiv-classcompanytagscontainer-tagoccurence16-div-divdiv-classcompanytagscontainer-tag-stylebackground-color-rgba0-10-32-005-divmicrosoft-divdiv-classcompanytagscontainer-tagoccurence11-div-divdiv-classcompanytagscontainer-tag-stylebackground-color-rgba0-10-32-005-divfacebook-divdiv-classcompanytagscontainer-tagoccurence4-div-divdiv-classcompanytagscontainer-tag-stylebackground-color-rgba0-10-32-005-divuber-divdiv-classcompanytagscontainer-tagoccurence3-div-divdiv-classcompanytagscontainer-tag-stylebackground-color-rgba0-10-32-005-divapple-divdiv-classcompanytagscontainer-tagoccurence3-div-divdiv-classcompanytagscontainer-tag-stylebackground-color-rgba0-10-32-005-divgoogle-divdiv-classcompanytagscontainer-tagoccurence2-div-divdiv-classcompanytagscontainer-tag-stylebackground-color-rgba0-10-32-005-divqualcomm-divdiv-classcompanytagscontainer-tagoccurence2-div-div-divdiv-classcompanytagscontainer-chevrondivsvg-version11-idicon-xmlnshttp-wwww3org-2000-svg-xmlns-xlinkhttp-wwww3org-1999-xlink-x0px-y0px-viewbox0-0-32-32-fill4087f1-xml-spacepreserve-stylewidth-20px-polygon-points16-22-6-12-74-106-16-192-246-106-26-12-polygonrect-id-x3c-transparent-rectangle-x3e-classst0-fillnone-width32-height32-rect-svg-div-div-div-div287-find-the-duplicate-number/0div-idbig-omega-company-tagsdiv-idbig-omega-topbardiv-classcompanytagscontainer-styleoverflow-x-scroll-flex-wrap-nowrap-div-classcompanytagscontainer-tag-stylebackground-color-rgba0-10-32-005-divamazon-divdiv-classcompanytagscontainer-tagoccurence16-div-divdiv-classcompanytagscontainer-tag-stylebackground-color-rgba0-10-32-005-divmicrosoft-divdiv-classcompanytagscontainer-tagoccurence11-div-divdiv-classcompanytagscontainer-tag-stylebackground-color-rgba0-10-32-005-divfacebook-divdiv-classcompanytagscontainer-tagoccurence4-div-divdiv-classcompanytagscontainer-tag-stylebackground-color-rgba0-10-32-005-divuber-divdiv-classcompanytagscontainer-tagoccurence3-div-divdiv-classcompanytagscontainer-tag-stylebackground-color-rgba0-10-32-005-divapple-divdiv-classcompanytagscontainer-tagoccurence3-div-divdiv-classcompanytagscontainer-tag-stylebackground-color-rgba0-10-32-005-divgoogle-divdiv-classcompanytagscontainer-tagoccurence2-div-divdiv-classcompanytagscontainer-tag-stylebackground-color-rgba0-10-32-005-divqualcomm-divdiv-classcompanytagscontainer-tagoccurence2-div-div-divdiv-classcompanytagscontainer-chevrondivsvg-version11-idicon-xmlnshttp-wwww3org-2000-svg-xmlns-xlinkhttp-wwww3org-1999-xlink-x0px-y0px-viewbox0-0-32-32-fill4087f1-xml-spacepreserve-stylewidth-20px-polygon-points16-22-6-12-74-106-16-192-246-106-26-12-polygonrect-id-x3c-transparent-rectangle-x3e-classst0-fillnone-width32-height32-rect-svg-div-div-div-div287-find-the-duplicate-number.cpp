class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[i]=0;
        }
        for(auto x:nums)
        {
            if(mpp[x]==1)
                return x;
            mpp[x]++;
        }
        return -1;
    }
};