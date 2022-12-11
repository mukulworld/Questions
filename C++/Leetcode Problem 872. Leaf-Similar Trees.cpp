public:
    vector<int>temp1,temp2;
    vector<int> go(TreeNode* root,vector<int>&temp){
        if(! root) return temp;
        if(!root->right && !root->left) temp.push_back(root->val);
        go(root->left,temp);
        go(root->right,temp);
        return temp;
    }
    
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        return (go(root1,temp1) == go(root2,temp2)); 
    }
