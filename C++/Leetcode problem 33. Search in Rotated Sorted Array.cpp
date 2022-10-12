class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        
        while(low<=high){
            mid = (high+low)/2;
             if(nums[mid] == target ) return mid;
            
           if(nums[low] <= nums[mid]){
                if(target<= nums[mid] && target >= nums[low]) high = mid-1;
                else low = mid+1;
                
            }  
            else{
                if(target<= nums[high] && target >= nums[mid])  low = mid+1;
                else high = mid-1;
            }
                
        }
          return -1;              
    }
};

// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/
