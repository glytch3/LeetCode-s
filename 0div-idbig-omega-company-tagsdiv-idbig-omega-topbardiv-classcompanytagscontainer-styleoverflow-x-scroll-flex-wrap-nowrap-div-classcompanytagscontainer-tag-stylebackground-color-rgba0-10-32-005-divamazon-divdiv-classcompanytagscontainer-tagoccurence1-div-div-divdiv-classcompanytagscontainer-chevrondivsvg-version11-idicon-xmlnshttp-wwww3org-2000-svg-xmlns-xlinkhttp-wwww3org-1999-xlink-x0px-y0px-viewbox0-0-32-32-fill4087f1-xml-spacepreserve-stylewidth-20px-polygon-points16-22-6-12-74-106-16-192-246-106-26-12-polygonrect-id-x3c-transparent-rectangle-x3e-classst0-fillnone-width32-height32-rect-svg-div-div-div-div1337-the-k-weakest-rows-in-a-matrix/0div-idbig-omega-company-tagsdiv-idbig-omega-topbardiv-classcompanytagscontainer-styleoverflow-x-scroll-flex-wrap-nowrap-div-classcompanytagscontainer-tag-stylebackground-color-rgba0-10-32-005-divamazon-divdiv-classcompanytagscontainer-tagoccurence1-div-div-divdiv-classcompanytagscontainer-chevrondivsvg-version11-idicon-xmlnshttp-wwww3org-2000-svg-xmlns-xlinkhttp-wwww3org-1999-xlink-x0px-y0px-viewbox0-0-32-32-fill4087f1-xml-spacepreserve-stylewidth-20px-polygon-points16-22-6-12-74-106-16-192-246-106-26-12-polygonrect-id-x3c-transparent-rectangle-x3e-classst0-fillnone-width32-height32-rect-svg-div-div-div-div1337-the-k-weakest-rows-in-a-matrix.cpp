class Solution {
public:
    int calc(vector<int> line,int size)
    {
        int l=0;
        int r=size-1;
        int ans=0;
        if(line[l]==0)
            return l;
        if(line[l]==1 && line[1]==0)
            return l+1;
        if(line[r]==1)
            return r+1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(line[mid]==1 && line[mid+1]==0)
                return mid+1;
            else if(line[mid]==1)
            {
                l=mid+1;
            }
            else if(line[mid]==0)
            {
                r=mid-1;
            }
        }
        return 0;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rsize=mat[0].size();
        int csize=mat.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<csize;i++)      
        {
            int a=calc(mat[i],rsize);
            pq.push({a,i});
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            pair a=pq.top();
            pq.pop();
            ans.emplace_back(a.second);
        }
        return ans;
    }
};