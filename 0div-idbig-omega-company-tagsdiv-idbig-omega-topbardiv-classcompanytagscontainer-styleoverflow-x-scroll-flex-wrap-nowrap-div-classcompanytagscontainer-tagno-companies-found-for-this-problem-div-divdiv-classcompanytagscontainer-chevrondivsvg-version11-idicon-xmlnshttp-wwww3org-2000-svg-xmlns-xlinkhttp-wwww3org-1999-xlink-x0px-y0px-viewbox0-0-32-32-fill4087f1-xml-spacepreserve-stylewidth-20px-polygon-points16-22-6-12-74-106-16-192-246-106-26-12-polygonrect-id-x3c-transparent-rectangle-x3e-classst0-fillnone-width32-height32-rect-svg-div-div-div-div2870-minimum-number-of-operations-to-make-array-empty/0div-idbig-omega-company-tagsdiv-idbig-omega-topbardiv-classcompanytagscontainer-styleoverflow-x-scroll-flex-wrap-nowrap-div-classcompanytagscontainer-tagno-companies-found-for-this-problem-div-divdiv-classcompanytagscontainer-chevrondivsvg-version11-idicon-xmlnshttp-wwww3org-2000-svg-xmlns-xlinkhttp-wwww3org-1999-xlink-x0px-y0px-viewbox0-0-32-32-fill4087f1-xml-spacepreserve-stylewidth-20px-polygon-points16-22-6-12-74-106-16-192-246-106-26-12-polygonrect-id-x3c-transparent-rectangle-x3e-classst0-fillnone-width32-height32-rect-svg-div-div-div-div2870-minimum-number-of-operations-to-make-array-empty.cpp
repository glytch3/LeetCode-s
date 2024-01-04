class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for(int num:nums) {
            cnt[num]++;
        }
        int ans = 0;
        for(auto[_, c]:cnt){
            if(c==1){
                return -1;
            }
            ans+=ceil((double)(c)/3);
        }
        return ans;
    }
};