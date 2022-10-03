class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int sum=0,maxCost=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(i>0 && colors[i]!=colors[i-1])
            {
                ans+=sum-maxCost;
                sum=0;
                maxCost=0;
            }
            sum+=neededTime[i];
            maxCost=max(neededTime[i],maxCost);
        }
        ans+=sum-maxCost;
        return ans;
    }
};