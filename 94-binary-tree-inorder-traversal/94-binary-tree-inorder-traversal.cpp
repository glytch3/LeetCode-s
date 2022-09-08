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
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> ans;
        stack<TreeNode*> stk;
        TreeNode* cur;
        
        stk.push(root);
        
        while(!stk.empty()){
            cur = stk.top();
            while(cur && cur->left){
                stk.push(cur->left);
                cur = cur->left;
            }
            cur = stk.top(); stk.pop();
            if(cur) ans.push_back(cur->val);
            if(stk.size() > 0) stk.top()->left = nullptr;
            if(cur && cur->right) stk.push(cur->right);
        }
        
        return ans;
    }
};