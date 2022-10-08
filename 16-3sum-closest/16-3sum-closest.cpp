class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff,p=0,pp,init,begin,end,sum,old=INT_MAX,ans=0;
        
        if(nums.size() < 3) return ans;

        int cmp=INT_MAX;
        for(int x=0;x<nums.size();x++)
        {
            init=p;
            begin=p+1;
            end=nums.size()-1;
            while(begin<end)
            {
                sum=nums[init]+nums[begin]+nums[end];
                if(sum==target)
                    return target;
                diff=abs(sum-target);
                if(diff<old)
                {
                    ans=sum;
                    old=diff;
                }
                if(sum<target)
                begin++;
                if(sum>target)
                end--;
            }
            p++;
        }
    return ans;
    }
};      
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    /*int diff = INT_MAX; 
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
    */
