class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int j=0;j<n-1;j++)
        {
            for(int i=j+1;i<n;i++)
            {
                if(nums[i]==nums[j])
                    ans++;
                else
                    exit;
            }
        }
        return ans;
    }
};

// class Solution {
//  public:
//   int numIdenticalPairs(vector<int>& nums) {
//     int ans = 0;
//     vector<int> count(101);

//     for (const int num : nums)
//       ans += count[num]++;

//     return ans;
//   }
// };
