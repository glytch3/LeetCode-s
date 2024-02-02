class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for(int x=1;x<=9;x++)
        {
            int num=x;
            int nextdig=x+1;
            while(num<=high && nextdig<=9)
            {
                num=num*10+nextdig;
                if(low<=num && num<=high)
                    ans.push_back(num);
                nextdig++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};