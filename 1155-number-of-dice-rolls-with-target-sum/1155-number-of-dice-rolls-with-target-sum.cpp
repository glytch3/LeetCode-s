class Solution {
int MOD = pow(10, 9) + 7;
public:
    int numRollsToTarget(int d, int f, int target) {
        if (target > d * f)
            return 0;
        vector<int> dp1(d * f + 1, 0), dp2(d * f + 1, 0);
        for (int i = 1; i <= f; i++) {
            dp1[i] = 1;
        }

        for (int i = 2; i <= d; i++) {
            for (int j = 1; j < dp1.size(); j++) {
                if (dp1[j] == 0)
                    continue;
                for (int k = 1; k <= f; k++) {
                    dp2[k + j] += dp1[j] % MOD;
                    dp2[k + j] %= MOD;
                }
            }
            swap(dp1, dp2);
            dp2.assign(d * f + 1, 0);
        }

        return dp1[target];
    }
};