class Solution {
public:
    
    TreeNode* sortedArrayToBST(vector<int>& nums){
        return helper(nums,0,nums.size()-1);
    }
    
    
    
    TreeNode* helper(vector<int>arr,int a, int b) { 
       
        if(a>b) return NULL;
        
           int mid = ( a + b)/2;
            TreeNode *root = new TreeNode(arr[mid]);
           root->left = helper(arr,a,mid-1);
           root->right = helper(arr,mid+1,b);
            return root;       
         
               
    }
};
