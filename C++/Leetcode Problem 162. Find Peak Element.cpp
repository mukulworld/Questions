// Linear search 
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max =0;
        
        for(int i=1;i<nums.size();i++){
             if(nums[i] > nums[max]) max = i;   
             else {
                 max = i-1;
                 break;
             }
        }        
        return max;
    }
};



// Binary Search O(logn)

