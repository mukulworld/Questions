class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
 int a=0,c=nums.size()-1;
        
     while (a<=c) {
            int b= a+(c-a)/2;
            if (nums[b]<target)
                a=b+1;
            else
                c=b-1;
        }
        return a;
    }
};
