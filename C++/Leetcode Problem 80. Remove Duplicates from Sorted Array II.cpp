class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 3) return nums.size();
        int l=1,count=1,prev=nums[0];
        
        for(int i=1;i<nums.size();i++){
            
            if (nums[i] != prev ){
                nums[l] = nums[i];
                count = 1;
                l++;
                prev = nums[i];
            }
            else if(count < 2 && nums[i] == prev){
                nums[l] = nums[i];
                count++;
                l++;
                }
           else count++;
        }       
        return l;
    }
};
