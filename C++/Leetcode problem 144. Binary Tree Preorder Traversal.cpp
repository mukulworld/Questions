class Solution {
public:
     vector<int> answer;
    
    vector<int> preorderTraversal(TreeNode* root) {
        if(root) {
            answer.push_back(root->val);
            preorderTraversal(root->left);
             preorderTraversal(root->right);
          
        }
          return answer;
    }
};

// https://leetcode.com/problems/binary-tree-preorder-traversal/
