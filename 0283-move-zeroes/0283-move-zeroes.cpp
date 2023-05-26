class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(const int a : nums)
            if (a != 0)
                nums[i++] = a;
        while (i<nums.size())
            nums[i++]=0;
    }
};