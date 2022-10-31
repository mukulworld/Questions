// https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       vector<int>ans {0,0};
        unordered_map<int,int>mapp;
        
        for( auto x: nums){
            if(mapp[x]) ans[0] = x;
            if(!mapp[x])  mapp[x]++;
        } 
        
        for(int i=1; i<=nums.size() ;i++){
            if(mapp[i]) continue;
            if(!mapp[i]){
            ans[1] = i;
            break;
        }
           
        }
        
        return ans;
    }
};
