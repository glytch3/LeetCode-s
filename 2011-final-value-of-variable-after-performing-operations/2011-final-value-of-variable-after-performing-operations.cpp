class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto a:operations)
        {
            if (a[1]=='+')
            x++;
            else
            x--;  
        }
        return x;
    }
};