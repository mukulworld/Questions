class Solution {
public:
    
    vector<int>ans;
    
    void mapp(TreeNode* root){
        if(root){
           
            mapp(root->left);
            ans.push_back(root->val); 
            mapp(root->right);
        }    
    }

    bool findTarget(TreeNode* root, int sum) {
       if(!root) return false;
        mapp(root);
        int i=0,j=ans.size()-1;
        
    while(i<j){
        if(ans[i]+ans[j]>sum) j--;
        else if(ans[i]+ans[j] < sum) i++;
       else  return true;
    }
       return false;
        
    }
};



// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
