class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()<=1) return nums.size();

        sort(nums.begin(),nums.end());
        long int maxx=1,count=1;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i] ==1 ){
                count+=1;
                maxx = max(count,maxx);
            }
            else if(nums[i+1]-nums[i] ==0 ) continue;
            else count=1;
        }
        return maxx;
    }
};
