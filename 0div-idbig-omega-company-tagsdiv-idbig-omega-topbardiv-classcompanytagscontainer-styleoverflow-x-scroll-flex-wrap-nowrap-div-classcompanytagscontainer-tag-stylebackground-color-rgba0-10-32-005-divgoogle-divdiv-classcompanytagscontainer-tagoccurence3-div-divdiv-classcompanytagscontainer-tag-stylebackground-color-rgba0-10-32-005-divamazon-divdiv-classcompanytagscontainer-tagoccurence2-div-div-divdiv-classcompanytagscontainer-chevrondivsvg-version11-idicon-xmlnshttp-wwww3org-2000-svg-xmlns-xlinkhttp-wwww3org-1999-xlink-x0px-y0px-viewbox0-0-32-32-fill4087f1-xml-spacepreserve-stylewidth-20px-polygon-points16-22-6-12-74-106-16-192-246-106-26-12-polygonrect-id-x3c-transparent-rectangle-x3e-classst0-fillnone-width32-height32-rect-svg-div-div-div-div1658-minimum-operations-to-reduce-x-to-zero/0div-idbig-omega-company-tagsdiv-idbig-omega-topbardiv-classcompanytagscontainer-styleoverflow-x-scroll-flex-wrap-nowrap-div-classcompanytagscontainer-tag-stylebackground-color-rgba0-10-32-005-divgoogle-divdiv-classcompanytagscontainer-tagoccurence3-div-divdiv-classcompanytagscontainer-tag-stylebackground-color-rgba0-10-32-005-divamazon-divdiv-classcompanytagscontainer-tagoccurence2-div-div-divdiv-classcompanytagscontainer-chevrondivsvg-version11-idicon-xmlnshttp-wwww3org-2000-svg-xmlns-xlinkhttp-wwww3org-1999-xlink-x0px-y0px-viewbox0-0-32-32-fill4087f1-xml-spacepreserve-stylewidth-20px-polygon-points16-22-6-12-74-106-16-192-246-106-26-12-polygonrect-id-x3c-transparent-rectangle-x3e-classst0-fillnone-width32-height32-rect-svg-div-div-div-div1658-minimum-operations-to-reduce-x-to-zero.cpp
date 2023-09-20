class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int size=nums.size();
        if(nums[0]>x && nums[size-1]>x)
            return -1;
        if(nums[0]==x || nums[size-1]==x)
            return 1;
        if(size==1 && nums[0]!=x) 
            return -1;
        
        vector<int> prefix;
        prefix.push_back(0);
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=nums[i];
            prefix.push_back(sum);
        }
        if(sum<x) 
            return -1;
        if(sum==x)
            return size;
        
        unordered_map<int,int> suffix;
        for(int i=0;i<size;i++){
            suffix[sum]=i;
            sum-=nums[i];
        }
        suffix[0]=size;

        int noOfOps=1e9;
        int i=0;
        while(prefix[i]<=x){
            int target=x-prefix[i];
            if(suffix[target]){
                noOfOps=min(noOfOps,i+size-suffix[target]);
            }
            i++;
        }
        if(noOfOps==1e9) 
            return -1;
        return noOfOps;
        
    }
};