class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int a = board.size();
        int b = board[0].size();
        int count =0,top,left;

        for(int i=0;i<a;i++){
            top = i-1;
            for(int j=0;j<b;j++){
                left = j-1;
                if(board[i][j] == 'X' && (( (top < 0) || board[top][j]== '.' ) && ((left<0) || board[i][left] == '.' ))) count++;
            }
        }
        

return count;


        
    }
};
