class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid;
        int a = nums[0];
        while(low<high){
            mid = ( high + low ) /2;
            if(nums[mid] > nums[mid+1]) return nums[mid+1];
            if(nums[mid] > nums[high])  low = mid;
            if(nums[mid] < nums[high]) high = mid;   
        }
        
        
       return a;
    }
};

// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
