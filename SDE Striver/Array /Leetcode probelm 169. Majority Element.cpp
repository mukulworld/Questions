class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0],count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == ans) count++;
            else if(count ==0) ans = nums[i];
            else count--;
        }
        return ans;
    }
};
