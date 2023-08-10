class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0||(n==1 && nums[0]!=target))
            return false;
        if(nums[0]==target)
           return true;
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            cout<<mid<<" ";
            if(nums[mid]==target)
                return true;
            else if(nums[mid]==nums[low] && nums[mid]==nums[high])
            {
                high--;
                low++;
            }
            else if (nums[mid] > target) 
            {
                if (nums[mid] >= nums[low] && nums[low] > target)
                    low = mid + 1;
                else
                    high = mid - 1;
            } else 
            {
                if (nums[mid] <= nums[high] && nums[high] < target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return false;
    }
};