class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        ans.push_back({});
        
        for(int i=0; i<nums.size();i++){
            
            int p = ans.size();
            
            for(int j=0; j<p; j++){
                
                vector<int>dummy = ans[j];
                dummy.push_back(nums[i]);
                ans.push_back(dummy);
                
            }           
        }
           
        return ans;
    }
};
