class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int mid =0; 
        
        sort(nums.begin(),nums.end());
        
        if(nums.size()%2 != 0) mid = nums[nums.size()/2];
        if(nums.size()%2 == 0) mid = (nums[nums.size()/2] + nums[(nums.size()/2)-1])/2 ; 
        
        
         int sum =0;
        for(auto x: nums) sum += abs(mid-x);
        
        
     return sum;   
    }
};
