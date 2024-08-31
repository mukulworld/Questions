class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mapp;
        vector<int>ans;
        int x=0;
        for(int i=0;i<nums.size();i++) mapp[nums[i]] = i;

        for(int i=0; i<nums.size();i++){
            x = target - nums[i];
            if(mapp[x] && mapp[x]!=i) {
                    ans.push_back(i);
                    ans.push_back(mapp[x]);
                    break;
                
            }
        }
        return ans;

    }
};
