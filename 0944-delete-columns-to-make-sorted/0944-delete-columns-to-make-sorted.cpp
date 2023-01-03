class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        //int n=strs[0].size();
        int m=strs.size();
        int ans=0;
        
        for(int i=0;i<(strs[0].size());i++)
            for(int j=0;j<m-1;j++)
            {
                if(strs[j][i] > strs[j + 1][i]) 
                {
                    ans++;
                    break;
                }
            }
            return ans;
    }
};

