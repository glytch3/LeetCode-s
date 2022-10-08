class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        /*
        sort(nums.begin(),nums.end());
        int *p=nums;
        int *pp=nums++;
        int *ppp=nums.end();
        int cmp=INT_MAX;
        for(int x=0;x<nums.size();x++)
        {
            
            for(int y=0;y<nums.size();y++)
            {
                
            }
            p++;
        }
        */
            
    int diff = INT_MAX; 
    int ans = 0; //final sum of three
    sort(nums.begin(), nums.end());

    if(nums.size() < 3) return ans;
    for(size_t first = 0; first < nums.size(); first++) {
      int head = first + 1;
      int tail = nums.size() - 1;
      while(head < tail) {
        int sum3 = nums[head] + nums[tail] + nums[first];
        int d = abs(sum3 - target);
        if(d == 0) return target;
        if(d < diff) {
          diff = d;
          ans = sum3;
        }
        if(sum3 > target) tail--;
        if(sum3 < target) head++;
      }
      while(first < nums.size()-1 && nums[first+1] == nums[first])
        first++;
    }
    return ans;
    }
};