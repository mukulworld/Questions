class Solution {
public:
        
    int findBottomLeftValue(TreeNode* head) {
          queue<TreeNode*> temp;
        temp.push(head);
        int ans = head->val;
        
        while(!temp.empty()){         
            int n = temp.size();
        for(int i = 0; i<n; i++){
           TreeNode* curr = temp.front();
           temp.pop();
        if(i == 0) ans = curr->val;
        if(curr->left) temp.push(curr->left);
        if(curr->right)  temp.push(curr-> right);
        }
      
    }
        
        return ans;
    } 
};
