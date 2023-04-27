class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        constexpr int kMod = 1'000'000'007;
        const long lcm = std::lcm(a, b);
        long nn = n;
        long l = min(a, b);
        long r = min(a, b) * nn;

        while (l < r) {
          const long long m = (l + r) / 2;
          if (m / a + m / b - m / lcm >= nn)
            r = m;
          else
            l = m + 1;
        }

        return l % kMod;
    }
};