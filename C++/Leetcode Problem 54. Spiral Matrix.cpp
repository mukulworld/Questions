class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int c = matrix.size()*matrix[0].size(),count =0;
        int ltop =0,rtop=0,lbottom=matrix.size()-1,rbottom=matrix[0].size()-1;
        vector<int>ans;
        while(ltop<=rbottom && rtop <= lbottom){
            for(int i=ltop;i<=rbottom;i++) {
                ans.push_back(matrix[rtop][i]);
            }
                rtop++;
            for(int i=rtop;i<=lbottom;i++) {
                ans.push_back(matrix[i][rbottom]);
            }
                rbottom--;
if(rtop <= lbottom){
            for(int i=rbottom;i>=ltop;i--) {
                ans.push_back(matrix[lbottom][i]);
            }
}
                lbottom--;
if(ltop<=rbottom){
            for(int i=lbottom;i>=rtop;i--) {
                ans.push_back(matrix[i][ltop]);
            }
}
               ltop++;

        }




            return ans;
    
    }
};
