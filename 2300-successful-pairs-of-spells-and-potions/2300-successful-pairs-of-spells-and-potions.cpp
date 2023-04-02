class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(begin(potions), end(potions));
        int n=spells.size();
        int m=potions.size();
        vector<int> ans;
        int total=0;
        for(int i=0;i<n;i++)
        {
            ans.push_back(findtotalpotion(spells[i],potions,success,m));
        }
        return ans;
    }
    
    int findtotalpotion(long long spell,vector<int>& potions,long long success,int m)
    {
        int low=0;
        int high=m;
        while(low<high)
        {
            int mid=(low+high)/2;
            if((potions[mid]*(spell)>=success))
            {
                high=mid;
            }
            else
                low=mid+1;
        }
        return m-low;
    }
};