class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int>mapp;
        int d;
        for(int i=0; i<nums.size();i++) {
            if(mapp.count(nums[i]) && (abs(mapp[nums[i]] - i)<= k )) return true;
            mapp[nums[i]] = i;
            
        }
        return false; 
    }
};
