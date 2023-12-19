class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>> res(m, vector<int>(n));
        for(int row=0;row<m;row++)
            for(int col=0;col<n;col++)
            {
                int sum=0;
                int no=0;
                for(int i=row-1;i<=row+1;i++)
                    for(int j=col-1;j<=col+1;j++)
                    {
                        if(i>-1 && i<m && j>-1 && j<n)
                        {
                            sum+=img[i][j];
                            no++;
                        }
                            
                    }
                res[row][col]=sum/no;
            }
        return res;
    }
};