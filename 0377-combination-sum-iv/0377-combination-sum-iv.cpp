class Solution {
public:
    // int f(vector<int>& nums, int target,int pos,int size,vector<int> dp)
    // {
    //     if(target==0)
    //         return 1;
    //     if(target<0)
    //         return 0;
    //     if(dp[target]!=-1)
    //         return dp[target];
    //     int ans=0;
    //     for(int i=0;i<size;i++)
    //     {
    //         ans=ans+f(nums,target-nums[i],pos-1,size,dp);
    //     }
    //     return dp[target]=ans;
    // }
    
    int f(int n,vector<int>& nums,int target,vector<int>& dp) {
    if (target==0) {
        return 1;
    }
    if (target<0) {
        return 0;
    }
    if (dp[target]!=-1) {
        return dp[target];
    }
    int take=0;
    for (int j=0;j<n;++j) {
        take+=f(n,nums,target-nums[j],dp);
    }
    return dp[target] = take;
}

    int combinationSum4(vector<int>& nums, int target) {
        int size=nums.size();
        int pos=size-1;
        vector<int> dp(target+1,-1);
        return f(size,nums,target,dp);
        
        // int a=f(nums,target,pos-1,size,dp);
        // dp[0]=1;
        // for(int i=1;i<=target;i++)
        // {
        //     for(int j=0;j<size;j++)
        //     {
        //         if(i-nums[j]>=0)
        //             dp[i]+=dp[i-nums[j]];
        //     }
        // }
        // return dp[target];
        
    }
};