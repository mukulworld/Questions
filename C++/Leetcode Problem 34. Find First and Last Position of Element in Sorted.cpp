// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans {-1,-1};
        
        int l=0,r=nums.size()-1,mid,p=-1;
        
        while(l<=r){
            mid = l + (r-l)/2;
            
           if(nums[mid] == target ){
              p = mid;
              r = mid-1;  
           }
           else if(nums[mid] > target) r = mid-1;
           else l = mid+1;                 
        }
        ans[0] = p;
        
        p=-1,l=0,r=nums.size()-1;
 
        while(l<=r){
            mid = l + (r-l)/2 ;
            if(nums[mid] == target){
                l = mid+1;
                p = mid;
                }
            else if(nums[mid] >= target) r = mid -1;
            else l = mid +1; 
        }
      ans[1] = p;             
           
   return ans;
                
    }
};
