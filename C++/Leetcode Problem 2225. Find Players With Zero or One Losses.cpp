class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans(2); 
        unordered_map<int,int>temp;
        
        for(auto x: matches){
            if(!temp[x[0]]) temp[x[0]]++;
            if(!temp[x[1]]) temp[x[1]]++;
        }
        
        for(auto x: matches) temp[x[1]]++;

        for(auto x: temp){
            if(x.second == 1) ans[0].push_back(x.first);
            if(x.second == 2) ans[1].push_back(x.first);
        }
        
        
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        
     return ans;   
    }
};
