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
    public List<List<Integer>> verticalTraversal(TreeNode root) {
     /*List<List<Integer>> res = new ArrayList<>();
        if(root == null) return res;
        Map<Integer, List<Integer>> dict = new TreeMap<>();
        Queue<TreeNode> queue = new LinkedList<>();
        Queue<Integer> code = new LinkedList<>();

        queue.offer(root);
        code.offer(0);
        while(!queue.isEmpty()){
            TreeNode front = queue.poll();
            int val = code.poll();
            if(!dict.containsKey(val)){
                dict.put(val, new ArrayList<>());
            }
            dict.get(val).add(front.val);
            if(front.left != null){
                queue.offer(front.left);
                code.offer(val-1);
            }
            if(front.right != null){
                queue.offer(front.right);
                code.offer(val+1);
            }
        }
        res.addAll(dict.values());
        return res;

    }
}*/
    
        
        /*TreeMap<Integer, ArrayList<Integer>> map = new TreeMap<>();
    helper(root, map);
    List<List<Integer>> result = new ArrayList<>();
    result.addAll(map.values());
    return result;
}
 
private void helper(TreeNode t, TreeMap<Integer, ArrayList<Integer>> map) {
    if (t == null) {
        return;
    }
 
    LinkedList<TreeNode> q1 = new LinkedList<>();
    LinkedList<Integer> q2 = new LinkedList<>();
    q1.offer(t);
    q2.offer(0);
 
    while (!q1.isEmpty()) {
        TreeNode node = q1.poll();
        int order = q2.poll();
 
        //add to map
        ArrayList<Integer> list = map.get(order);
        if (list == null) {
            list = new ArrayList<>();
            map.put(order, list);
        }
        list.add(node.val);
 
        if (node.left != null) {
            q1.offer(node.left);
            q2.offer(order - 1);
        }
 
        if (node.right != null) {
            q1.offer(node.right);
            q2.offer(order + 1);
        }
    }
}}  */
        
       TreeMap<Integer, TreeMap<Integer, PriorityQueue<Integer>>> map = new TreeMap<>();
        dfs(root, 0, 0, map);
        List<List<Integer>> list = new ArrayList<>();
        for (TreeMap<Integer, PriorityQueue<Integer>> ys : map.values()) {
            list.add(new ArrayList<>());
            for (PriorityQueue<Integer> nodes : ys.values()) {
                while (!nodes.isEmpty()) {
                    list.get(list.size() - 1).add(nodes.poll());
                }
            }
        }
        return list;
    }
    private void dfs(TreeNode root, int x, int y, TreeMap<Integer, TreeMap<Integer, PriorityQueue<Integer>>> map) {
        if (root == null) {
            return;
        }
        if (!map.containsKey(x)) {
            map.put(x, new TreeMap<>());
        }
        if (!map.get(x).containsKey(y)) {
            map.get(x).put(y, new PriorityQueue<>());
        }
        map.get(x).get(y).offer(root.val);
        dfs(root.left, x - 1, y + 1, map);
        dfs(root.right, x + 1, y + 1, map);
    }
}