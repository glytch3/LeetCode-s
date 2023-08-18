class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& num) {
        vector<vector<int>> retv;
            sort(num.begin(), num.end());
            do {
                retv.push_back(num);
            } while (next_permutation(num.begin(), num.end()));
            return retv;
    }
};