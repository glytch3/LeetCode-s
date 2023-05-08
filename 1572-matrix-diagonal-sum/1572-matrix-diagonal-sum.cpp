class Solution {
public:
    int diagonalSum(vector<vector<int>>& A) {
        int N = A.size(), sum = 0;
        for (int i = 0; i < N; ++i) sum += i == N - i - 1 ? A[i][i] : (A[i][i] + A[N - i - 1][i]);
        return sum;
    }
};