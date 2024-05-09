class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int sel=0;
        long long happ=0;
        sort(happiness.begin(),happiness.end(), greater<int>());
        for(int i=0;i<k;i++)
        {
            long long x=happiness[i]-sel;
            if(x>=0){
                happ=x+happ;
                sel++;
            }
            else
                break;
        }
        return happ;
    }
};