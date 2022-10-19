class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
       vector<int>ans ={0,0}; 
        unordered_map<int,int>mapp;
        for(auto x: nums) mapp[x]++;
        
        for(auto x = mapp.begin();x!=mapp.end();x++){
            ans[0] += x->second /2;
            ans[1] += x->second %2;
        }
        
      return ans;  
        
    }
};


//  https://leetcode.com/problems/maximum-number-of-pairs-in-array/
