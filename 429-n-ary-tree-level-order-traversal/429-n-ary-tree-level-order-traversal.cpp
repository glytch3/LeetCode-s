/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if( !root ) return res; 
        std::queue<Node*> que({root});
        while( !que.empty() ){
            int que_size = que.size();
            vector<int> curLevel;
            for(int i=0; i<que_size; i++){
                auto cur = que.front(); que.pop();
                curLevel.push_back(cur->val);
                for(Node* child : cur->children) que.push(child);
            } res.push_back(curLevel);
        } return res;
    }
};