// Problem No 240

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();
        int stRow = 0;
        int stCol = 0;
        int edRow = row-1;
        int edCol = col-1;

        for(int i = stRow; i <= edRow; i++){

            for(int j= stCol; j <= edCol; j++){
                if(matrix[i][j] == target){
                    return 1;
                }
            }
        }
        return 0;
    }
};