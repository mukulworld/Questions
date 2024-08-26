class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(matrix.empty() || matrix[0].empty()) return false;

        int m= matrix.size(),n=matrix[0].size();
        int l=0,r=m*n-1,mid,i,j;

        while(l<=r){
            mid = l + (r - l)/2 ;
            i = mid/n;
            j = mid%n;
            if(target < matrix[i][j]) r = mid-1;
            else if(target > matrix[i][j]) l=mid+1;
            else return true;

        }
        return false;
    }
};
