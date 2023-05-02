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
        ans=ans%2;
        if(ans==0)
            return 1;
        else
            return -1;
    }
};