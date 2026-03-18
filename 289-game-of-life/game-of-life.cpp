class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();
        
        vector<vector<int>> temp = board; // extra matrix
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                
                int count = 0;
                
                if(j+1 < col && board[i][j+1] != 0) count++;
                if(j-1 >= 0 && board[i][j-1] != 0) count++;
                if(i+1 < row && board[i+1][j] != 0) count++;
                if(i-1 >= 0 && board[i-1][j] != 0) count++;
                
                if(i-1 >= 0 && j-1 >= 0 && board[i-1][j-1] != 0) count++;
                if(i-1 >= 0 && j+1 < col && board[i-1][j+1] != 0) count++;
                if(i+1 < row && j-1 >= 0 && board[i+1][j-1] != 0) count++;
                if(i+1 < row && j+1 < col && board[i+1][j+1] != 0) count++;
                
                // apply rules
                if(board[i][j] == 1){
                    if(count < 2 || count > 3)
                        temp[i][j] = 0;
                } else {
                    if(count == 3)
                        temp[i][j] = 1;
                }
            }
        }
        
        board = temp; // copy back
    }
};