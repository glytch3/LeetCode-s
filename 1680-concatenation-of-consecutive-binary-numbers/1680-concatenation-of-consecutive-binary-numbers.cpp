class Solution {
public:
    int concatenatedBinary(int n) {
        constexpr int M = 1e9+7;
        int64_t ans = 0;
        for (int i = 1; i <= n; ++ i) {
            int curLen = 32 - __builtin_clz(i);
            ans = ((ans << curLen) + i) % M;
        }
        return ans;
    }
};