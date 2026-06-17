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

        if(p == nullptr && q == nullptr) return true;

        stack<TreeNode*> stk, stk2;

        stk.push(p);
        stk2.push(q);

        while(!(stk.empty()) || !(stk2.empty())){
            TreeNode* node1 = stk.top();
            TreeNode* node2 = stk2.top();
            stk.pop();
            stk2.pop();
            
            if(!node1 && !node2) continue;
            if(!node1 || !node2 || node1->val != node2->val) return false;

                stk.push(node1->left);
                stk2.push(node2->left);
                stk.push(node1->right);
                stk2.push(node2->right);

        }
        return true;
    }
};
