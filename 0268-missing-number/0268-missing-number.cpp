class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int check=0;
        for(auto& x:nums)
        {
            if(x!=check)
                return check;
            check++;
        }
        return check;
    }
};