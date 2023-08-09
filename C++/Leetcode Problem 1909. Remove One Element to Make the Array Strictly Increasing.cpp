class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {

        int l=0,r=0,minn=nums[nums.size()-1],maxx=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(maxx >= nums[i]) l++;
            maxx = max(maxx,nums[i]);
        }
        
        for(int i= nums.size()-2;i>=0;i--){
            if(minn <= nums[i])r++;
            minn = min(minn,nums[i]);
        }
        
        if (l==0 || l==1 || r==0 || r==1 ) return true;
        return false;
        
    }
};
