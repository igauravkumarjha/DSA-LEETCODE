class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row = matrix.size();
        int column = matrix[0].size();

        int count = 0;
        int total = row * column;

        int startingrow = 0;
        int startingcolumn = 0;
        int endingrow = row - 1;
        int endingcolumn = column - 1;

        while(count < total){

            // starting row
            for(int index = startingcolumn; index <= endingcolumn && count < total; index++){
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;

            // ending column
            for(int index = startingrow; index <= endingrow && count < total; index++){
                ans.push_back(matrix[index][endingcolumn]);
                count++;
            }
            endingcolumn--;

            // ending row
            for(int index = endingcolumn; index >= startingcolumn && count < total; index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;

            // starting column
            for(int index = endingrow; index >= startingrow && count < total; index--){
                ans.push_back(matrix[index][startingcolumn]);
                count++;
            }
            startingcolumn++;
        }

        return ans;
    }
};