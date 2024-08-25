class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l=-1,r;
        for(int i = nums.size()-2;i>=0;i--) {
            if(nums[i]<nums[i+1]){
            l=i; 
            break;
            }
        } 
        
        for(int i = nums.size()-1;i>=l && l!=-1;i--){
        if(nums[i]>nums[l]){
            r=i;
            swap(nums[l],nums[r]);
            break;
        }

    }
            reverse(nums.begin()+l+1, nums.end());


    }
};
