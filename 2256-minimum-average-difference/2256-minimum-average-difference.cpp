/* WTAF
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        float first=0;//
        float second=accumulate(begin(nums), end(nums), 0L);//
        int n=nums.size();//
        int mindiff=INT_MAX;//
        int ans=0;//
        for(int i=0;i<nums.size();++i)
        {
            first=first+nums[i];
            second=second-nums[i];
            const int firstavg = first / (i+1);
            const int secondavg = (i == n - 1) ? 0 : second / (n - i - 1);
            const int diff = abs(firstavg - secondavg);
            if(diff<mindiff){
                ans=i;
                mindiff = diff;
            }
        }
        return ans;
    }
};
*/

class Solution {
 public:
  int minimumAverageDifference(vector<int>& nums) {
    const int n = nums.size();
    int ans = 0;
    int minDiff = INT_MAX;
    long prefix = 0;
    long suffix = accumulate(begin(nums), end(nums), 0L);

    for (int i = 0; i < n; ++i) {
      prefix += nums[i];
      suffix -= nums[i];
      const int prefixAvg = prefix / (i + 1);
      const int suffixAvg = (i == n - 1) ? 0 : suffix / (n - i - 1);
      const int diff = abs(prefixAvg - suffixAvg);
      if (diff < minDiff) {
        ans = i;
        minDiff = diff;
      }
    }

    return ans;
  }
};


/* Time Limit Error + Interger 0verflow
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int up,down,avg,pos,tempavg=INT_MAX,size=nums.size();
        down=size-1;
        up=1;
        for(int i=0;i<size;i++)
        {
            avg=abs(first(up,nums)-(second(up,nums,size,down)));
            if(avg<tempavg)
            {
                tempavg=avg;
                pos=i;
            }
            up++;
            down--;
        }
        return pos;
    }
    
    int first(int n,vector<int>& nums)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        return (sum/(n));
    }
    
    int second(int n,vector<int>& nums,int size,int down)
    {
        if(down==0)
            return 0;
        int sum=0;
        for(int i=n;i<size;i++)
        {
            sum=sum+nums[i];
        }
        return (sum/down);
    }
};
*/