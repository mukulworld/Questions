class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
    int a=0;
    for(auto x: nums){
        if(x>=0) ans[a]=x,a+=2;
    }
    a=1;
    for(auto x: nums){
        if(x<0) ans[a]=x,a+=2;
    }
        return ans;
    }
};
