
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


// Unsorted array 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>answer;
        unordered_map<int,int>mapp;
        int compliment;
        for(int i=0;i<nums.size();i++)
        {
          compliment = target - nums[i];
              if(mapp.find(compliment) != mapp.end()) {
                answer.push_back(mapp[target-nums[i]]);
                answer.push_back(i);
                  return answer;
            }
           mapp[nums[i]]=i;
        }
        return answer;
    }
};
