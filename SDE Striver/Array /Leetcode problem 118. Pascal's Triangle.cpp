class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);      // if we don't declare size first then console do nullptr mention type of thing error
        for(int i=0;i<numRows;i++){
            ans[i].assign(i+1,1);    // that function i cheated from someone
            for(int j=1;j<i;j++){
                
                    ans[i][j]= ans[i-1][j-1]+ans[i-1][j];
                
            }
        }
        return ans;
    }
};
