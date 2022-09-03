class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int K) {
        if(N == 1){
            return {0,1,2,3,4,5,6,7,8,9};
        }
        
        queue<int> q;
        
        for(int i = 1; i <= 9; ++i){
            q.push(i);
        }
        
        int level = 1;
        vector<int> ans;
        
        while(level <= N){
            int level_size = q.size();
            
            while(level_size-- > 0){
                int cur = q.front(); q.pop();
                
                if(level == N){
                    ans.push_back(cur);
                }else{
                    int d = cur%10;
            
                    if(d-K >= 0){
                        q.push(cur*10 + (d-K));
                    }

                    if(K != 0 && d+K <= 9){
                        q.push(cur*10 + (d+K));
                    }
                }
            }
            
            ++level;
        }
        
        return ans;
    
    }
};