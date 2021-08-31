
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int start=0;
        int end = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(start!=end){
            if(nums[start]+nums[end]>target){
                end--;
            }
            if(nums[start]+nums[end]<target){
                start++;
            }
            if(nums[start]+nums[end]==target){
                v.push_back(start);
                v.push_back(end);
                break;
            }        
        }
        return v;
    }
};
