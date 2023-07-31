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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> mpp;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            TreeNode* t=temp.first;
            int x=temp.second.first;
            int y=temp.second.second;
            mpp[x][y].insert(t->val);
            if(t->left)
            {
                q.push({t->left,{x-1,y+1}});
            }
            if(t->right)
            {
                q.push({t->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto x:mpp)
        {
            vector<int> col;
            for(auto y:x.second)
            {
                col.insert(col.end(),y.second.begin(),y.second.end());
            }
            ans.emplace_back(col);
        }
        return ans;
    }
};