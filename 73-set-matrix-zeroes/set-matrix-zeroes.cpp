class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeroPos;
        int row=matrix.size();
         int col=matrix[0].size();

        for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                zeroPos.push_back({i, j});
            }
        }
    }
    for(auto it : zeroPos){
            int r = it.first;
            int c = it.second;

            // make entire row zero
            for(int j = 0; j < col; j++){
                matrix[r][j] = 0;
            }

            // make entire column zero
            for(int i = 0; i < row; i++){
                matrix[i][c] = 0;
    

    }
}
    }
};