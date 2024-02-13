class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mapp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++) mapp[nums[i]] = i;
        for(int i=0;i<nums.size();i++){
            if(mapp[target - nums[i]] && mapp[target - nums[i]] != i) {
                ans.push_back(i);
                ans.push_back(mapp[target - nums[i]]);
                break;
            }
        }      

    return ans;
    }
};
