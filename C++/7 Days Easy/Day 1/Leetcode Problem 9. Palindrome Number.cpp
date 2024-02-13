class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int>nums;
        while(x){
            nums.push_back(x%10);
            x/=10;
        }
        int n= nums.size()-1;
        for(int i=0;i<nums.size()/2;i++){
            if(nums[i]!= nums[n-i]) return false;
        }
        return true;
    }
};
