class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=0;
        for(auto x:nums)
        {
            if (x==0)
                return 0;
            if(x<0)
                ans++;
        }
         return ans % 2 == 0 ? 1 : -1;
    }
};