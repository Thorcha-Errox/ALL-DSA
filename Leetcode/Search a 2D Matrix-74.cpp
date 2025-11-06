// Problem no:- 74
// Brute Force Solution
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int sizeRow = matrix.size();
        int sizeCol = matrix[0].size();

        for(int row =0; row < sizeRow; row++){
            for(int col =0; col < sizeCol; col++){
                if(matrix[row][col] == target){
                    return 1;
                }
            }
        }
    return 0;
    }
};