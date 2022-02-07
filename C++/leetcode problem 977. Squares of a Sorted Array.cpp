// it was an brute force mwthos, as i didnt have too much time today so i did by brute force
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        
        return nums;
    }
};
