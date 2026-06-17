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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> res;

        if(root == nullptr) return res;

        int level {0};

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int> group;
            for(int i {}; i < n; ++i){
                TreeNode* node = q.front();
                q.pop();
                group.push_back(node->val);
                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
            }
            //level++;
            res.push_back(group);
        }
        return res;
    }
};
