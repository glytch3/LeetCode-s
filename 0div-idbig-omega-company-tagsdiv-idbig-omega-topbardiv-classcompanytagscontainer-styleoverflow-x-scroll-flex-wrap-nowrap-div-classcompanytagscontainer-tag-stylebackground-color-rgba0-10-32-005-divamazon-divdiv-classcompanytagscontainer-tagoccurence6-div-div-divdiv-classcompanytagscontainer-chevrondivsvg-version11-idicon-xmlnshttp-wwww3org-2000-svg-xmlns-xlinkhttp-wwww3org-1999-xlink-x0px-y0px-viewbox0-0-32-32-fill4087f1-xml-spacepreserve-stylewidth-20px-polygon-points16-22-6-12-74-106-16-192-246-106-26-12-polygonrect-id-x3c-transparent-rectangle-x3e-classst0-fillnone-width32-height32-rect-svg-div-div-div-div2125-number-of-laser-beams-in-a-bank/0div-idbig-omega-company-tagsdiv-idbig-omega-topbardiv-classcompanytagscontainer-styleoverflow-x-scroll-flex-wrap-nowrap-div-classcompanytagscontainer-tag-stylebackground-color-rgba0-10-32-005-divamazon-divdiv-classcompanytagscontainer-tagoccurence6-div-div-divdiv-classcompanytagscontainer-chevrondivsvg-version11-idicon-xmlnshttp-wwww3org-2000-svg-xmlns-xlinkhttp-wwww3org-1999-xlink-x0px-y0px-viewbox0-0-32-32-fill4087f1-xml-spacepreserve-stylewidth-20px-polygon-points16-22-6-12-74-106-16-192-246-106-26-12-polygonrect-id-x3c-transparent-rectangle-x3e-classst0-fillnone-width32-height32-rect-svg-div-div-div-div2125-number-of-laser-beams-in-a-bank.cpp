class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int currcount=0;
        vector<int> counts;
        if(bank.size()<=1)
            return 0;
        for(auto x:bank)
        {
            for(auto y:x)
            {
                if(y=='1')
                {
                    currcount++;
                }
            }
            if(currcount>0)
            {
                counts.push_back(currcount);
                currcount=0;
            }
        }
        if(counts.size()<=1)
            return 0;
        for(int i=0;i<counts.size()-1;i++)
        {
            cout<<counts[i]<<"--"<<counts[i+1]<<"\n";
            cout<<ans<<"\n";
            ans=ans+(counts[i]*counts[i+1]);
            cout<<ans<<"\n";
        }
        return ans;
    }
};