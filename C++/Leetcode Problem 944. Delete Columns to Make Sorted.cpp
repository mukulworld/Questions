class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        if(strs.size() == 1) return 0;
        int count =0;
        for(int j=0;j<strs[0].size();j++){
            for(int i=0;i<strs.size()-1;i++){
                if(strs[i+1][j] < strs[i][j]) {
                    count+=1;
                    break;
                }
            }
        }
        
        return count;
    }
};
