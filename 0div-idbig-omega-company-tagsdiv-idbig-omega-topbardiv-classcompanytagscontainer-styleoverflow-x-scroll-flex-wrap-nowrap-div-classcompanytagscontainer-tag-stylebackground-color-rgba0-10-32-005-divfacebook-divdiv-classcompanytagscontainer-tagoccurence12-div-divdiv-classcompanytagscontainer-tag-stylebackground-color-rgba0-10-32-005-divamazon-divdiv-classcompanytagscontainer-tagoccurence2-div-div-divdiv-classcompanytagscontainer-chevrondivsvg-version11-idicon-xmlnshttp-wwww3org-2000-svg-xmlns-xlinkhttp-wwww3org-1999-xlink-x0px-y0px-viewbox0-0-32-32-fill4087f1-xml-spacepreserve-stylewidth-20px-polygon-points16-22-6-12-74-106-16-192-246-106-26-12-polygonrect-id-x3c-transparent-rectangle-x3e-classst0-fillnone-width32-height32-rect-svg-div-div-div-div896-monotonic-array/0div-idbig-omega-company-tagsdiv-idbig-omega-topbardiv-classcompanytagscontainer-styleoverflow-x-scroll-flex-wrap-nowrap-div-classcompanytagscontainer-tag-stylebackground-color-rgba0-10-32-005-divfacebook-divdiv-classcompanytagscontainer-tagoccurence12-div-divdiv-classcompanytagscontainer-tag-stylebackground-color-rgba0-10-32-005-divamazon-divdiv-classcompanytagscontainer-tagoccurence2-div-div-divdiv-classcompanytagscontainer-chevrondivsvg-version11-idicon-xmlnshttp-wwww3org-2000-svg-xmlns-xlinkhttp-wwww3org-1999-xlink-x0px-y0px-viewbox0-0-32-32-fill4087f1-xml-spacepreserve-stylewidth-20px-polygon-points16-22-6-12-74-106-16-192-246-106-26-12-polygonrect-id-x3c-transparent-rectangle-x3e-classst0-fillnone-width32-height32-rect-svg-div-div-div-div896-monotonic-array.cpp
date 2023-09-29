class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int tone=0;
        int size=nums.size();
        if(nums[0]<nums[size-1])
            tone=1;
        else if(nums[0]>nums[size-1])
            tone=-1;
        int temp=nums[0];
        for(int i=1;i<size;i++)
        {
            if(tone==-1 && temp<nums[i])
                return false;
            else if(tone==1 && temp>nums[i])
                return false;
            else if(tone==0 && temp!=nums[i])
                return false;
            temp=nums[i];
        }
        return true;
    }
};