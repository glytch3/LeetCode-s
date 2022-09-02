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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>queue;
        vector<double>answer;
        queue.push(root);
        
        while(!queue.empty())
        {
            int size=queue.size();
            double sum=0;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=queue.front();
                if(node->left)
                    queue.push(node->left);
                if(node->right)
                    queue.push(node->right);
                sum=sum+node->val;
                queue.pop();
                
            }
            answer.push_back(sum/size);
        }
        return answer;
    }
};