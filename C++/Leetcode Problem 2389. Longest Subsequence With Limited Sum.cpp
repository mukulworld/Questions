class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>ans;        
        sort(nums.begin(),nums.end());
                
        for(int i=0;i<queries.size();i++){
            int sum =0,count =0;
            for(int j=0;j<nums.size();j++){
                if(sum > queries[i])
                    break;
                else if(sum + nums[j] <= queries[i])
                {
                    sum = nums[j] + sum;
                    count +=1;
                }
            }
            ans.push_back(count);
        }       
       return ans;         
    }
};
