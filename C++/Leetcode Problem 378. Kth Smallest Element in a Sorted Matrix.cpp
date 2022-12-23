class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>temp;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                temp.push(matrix[i][j]);
                if(temp.size()>k) temp.pop();
            }
        }
        
        return temp.top();
        
    }
};
