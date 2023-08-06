class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long sum = 0;
        vector<int> result(2, 0);
        
        for (int i : nums) {
            sum ^= i;
        }
        
        sum = sum & (~sum + 1);
        for (int i : nums) {
            if ((sum & i) == 0) {
                result[0] ^= i;
            } else {
                result[1] ^= i;
            }
        }
        
        return result;
    }
};