class Solution {
public:
    void sortColors(vector<int>& nums) {
        int pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums[i]=nums[pos];
                nums[pos]=0;
                pos++;
            }
        }
        for(int i=pos;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                nums[i]=nums[pos];
                nums[pos]=1;
                pos++;
            }
        }
        for(int i=pos;i<nums.size();i++)
        {
            if(nums[i]==2)
            {
                nums[i]=nums[pos];
                nums[pos]=2;
                pos++;
            }
        }
    }
};