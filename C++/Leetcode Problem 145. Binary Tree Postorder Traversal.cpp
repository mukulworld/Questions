class Solution {
public:
     vector<int>answer;
    
     vector<int> postorderTraversal(TreeNode* root) {
        if(root){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        answer.push_back(root->val);
       
        }
        return answer;
    }
};

// https://leetcode.com/problems/binary-tree-postorder-traversal/
