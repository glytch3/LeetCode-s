/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public String tree2str(TreeNode root) {
        StringBuilder ans = new StringBuilder();
        dfs(ans, root);
        return ans.toString();
    }

    private void dfs(StringBuilder ans, TreeNode root) {
        if (root == null) {
            return;
        }
        ans.append(root.val);
        if (root.right != null) {
            // if the right child isn't empty, we still need to append '()' although the left child is empty
            dfs(ans.append('('), root.left);
            ans.append(')');
            dfs(ans.append('('), root.right);
            ans.append(')');
        } else if (root.left != null) {
            dfs(ans.append('('), root.left);
            ans.append(')');
        }
    }
}