// Problem No. :- 3643. Flip Square Submatrix Vertically

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {

        int stRw = x;
        int edRw = x+k-1;
        
        int stCl = y;
        int edCl = y+k-1;

        for(int i= stRw; i <= edRw ; i++){
            for(int j = stCl; j <= edCl; j++){
                swap(grid[i][j], grid[edRw][j]);
            }
            edRw--;
        }
        return grid;
    }
};