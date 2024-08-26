class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int v1=0,v2=0,n1=nums[0],n2=nums[0];
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]== n1) v1++;
            else if(nums[i] == n2) v2++;
            else if(!v1) n1 = nums[i], v1++;
            else if(!v2) n2 = nums[i], v2++;
            else v1--,v2--;
        }
        v1=0,v2=0;
        for(auto x: nums){
            if(x == n1) v1++;
            else if( x == n2)v2++;
        }
        if(v1>nums.size()/3) ans.push_back(n1);
        if(v2>nums.size()/3) ans.push_back(n2);

        
        return ans;

    }
};
