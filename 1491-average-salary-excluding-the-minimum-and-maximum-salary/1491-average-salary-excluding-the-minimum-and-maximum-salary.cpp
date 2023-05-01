class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (auto s : salary) {
            sum += s;
            maxi = max(maxi, s);
            mini = min(mini, s);
        }
        return (sum - maxi - mini) / (salary.size() - 2);
    }
};