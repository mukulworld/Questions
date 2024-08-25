class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s=nums[0],f=nums[0];

        do{
            f = nums[nums[f]];
            s = nums[s];
        } while(f != s);
        
        s=nums[0];
        
        while(f !=s ){
            f= nums[f];
            s= nums[s];
        }

        return f;
    }
};
