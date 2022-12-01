class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=0,r=0;
        r = accumulate(nums.begin(),nums.end(),0);
        
       for(int i=0;i<nums.size();i++){
          r = r-nums[i];
          if(l == r ) return i;
          else l = l + nums[i]; 
        }
        
        
      return -1;  
    }
};
