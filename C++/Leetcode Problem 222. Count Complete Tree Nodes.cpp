class Solution {
public:
    int countNodes(TreeNode* root) {
        int count =0;
        if(!root) {
            return 0;
        }
        return countNodes(root->left) + countNodes(root->right) + 1; 
       
    }
};

// https://leetcode.com/problems/count-complete-tree-nodes/
