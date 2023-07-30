/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int maxsize=q.size();
            int submin=q.front().second;
            int fronts;
            int backs;
            for(int i=0;i<maxsize;i++)
            {
                long long curid=q.front().second-submin;
                TreeNode* a=q.front().first;
                q.pop();
                if(a->left)
                    q.push({a->left,curid*2+1});
                if(a->right)
                    q.push({a->right,curid*2+2});
                if(i==0)
                    fronts=curid;
                if(i==maxsize-1)
                    backs=curid;
            }
            ans=max(ans,backs-fronts+1);
        }
        return ans;
    }
};