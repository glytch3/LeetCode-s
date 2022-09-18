class Solution {
public:
    int trap(vector<int>& height) {
        /*int ans = 0;
        for(int i = 0; i < height.size(); i++){
            int maxLeft = 0, maxRight = 0;
            for(int j = i; j >= 0 ; j--){
                maxLeft = max(maxLeft, height[j]);
            }
            for(int j = i; j < height.size() ; j++){
                maxRight = max(maxRight, height[j]);
            }
            ans =  min(maxLeft, maxRight) - height[i] + ans;
        }
        return ans;
    }
};*///Bruteforce - Time limit exceeds
        
     int N = height.size();
        if(N == 0) return 0;
        int left = 0, right = N-1;
        int leftMax = 0, rightMax = 0;
        int ans = 0;
        while(left < right){
            if(height[left] > leftMax){
                leftMax = height[left];
            }
            if(height[right] > rightMax){
                rightMax = height[right];
            }
            if(leftMax < rightMax){
                ans += max(0, leftMax - height[left]);
                left++;
            }else{
                ans += max(0, rightMax - height[right]);
                right--;
            }
        }
        return ans;
    }
};