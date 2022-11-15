// https://leetcode.com/problems/sort-colors/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one=0,zero=0;
        
        for(auto x: nums){
            if(x == 0) zero+=1;
            if(x == 1) one+=1;
    }
        
        for(int i=0;i<nums.size();i++){
            if(i<zero) nums[i] = 0;
            else if(i< zero + one ) nums[i] = 1;
            else nums[i] = 2;
        }
       
    }
};
