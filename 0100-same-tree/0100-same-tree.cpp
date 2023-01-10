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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p || !q)
      return p == q;
    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
  }
};

// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         bool a=check(p->val,q->val);
//         bool b=check(p->left->val,q->left->val);
//         bool c=check(p->right->val,q->right->val);
//         if(a==false||b==false||c==false)
//             return false;
//         return true;
//     }
    
//     bool check(int a,int b){
//         if(a!=b)
//             return false;
//         else 
//             return true;
//     }
// };