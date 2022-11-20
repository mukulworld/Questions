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

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
                
        int l=0,r=nums.size()-1,mid;
        
        while(l<r){
            mid = (r-l)/2 + l;
            if(nums[mid]  > nums[mid +1]) r = mid;
            else l = mid+1;            
        }
        
        return l;
    }
};
