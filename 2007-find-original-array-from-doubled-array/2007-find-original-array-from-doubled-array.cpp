class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        /*vector<int> res={};
        if(changed.size()%2==1)
            return {};
        int half=changed.size()/2;
        sort(changed.begin(), changed.end());
        for(int i=0;i<changed.size()/2;i++)
        {
            //if(changed[i]*2!=changed[i+half])
                //return {};
            res.push_back(changed[i]);
        }
        return res;*/
        
        if (size(changed) % 2) {
            return {};
        }
        unordered_map<int, int> cnts;
        for (const auto& x : changed) {
            ++cnts[x];
        }
        vector<int> nums;
        for (const auto& [x, _] : cnts) {
            nums.emplace_back(x);
        }
        sort(begin(nums), end(nums));
        vector<int> result;
        for (const auto& x : nums) {
            if (cnts[x] > cnts[2 * x]) {
                return {};
            }
            for (int i = 0; i < cnts[x]; ++i, --cnts[2 * x]) {
                result.emplace_back(x);
            }
        }
        return result;
    }
};