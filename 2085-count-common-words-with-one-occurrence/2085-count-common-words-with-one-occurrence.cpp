class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count1=0;
        int count2=0;   
        int ans=0;
        for(auto a:words1)
        {
            count1=0;
            count2=0;
            for(auto b:words1)
            {
                if(b==a)
                    count1++;
            }
            for(auto b:words2)
            {
                if(b==a)
                    count2++;
            }
            if(count1==1 && count2==1)
                ans++;
        }
        return ans;
    }
};