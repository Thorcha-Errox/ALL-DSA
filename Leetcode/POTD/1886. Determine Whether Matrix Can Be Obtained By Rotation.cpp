// Problem No. :- 1886. Determine Whether Matrix Can Be Obtained By Rotation

class Solution {
public:
    void rotate(vector<vector<int>>& grid, int m, int n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i < j) {
                    swap(grid[i][j], grid[j][i]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            reverse(grid[i].begin(), grid[i].end());
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int m = mat.size();
        int n = mat[0].size();

        for (int cnt = 1; cnt <= 4; cnt++) {
            bool equal = true;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (mat[i][j] != target[i][j]) {
                        equal = false;
                        break;
                    }
                }
                if (equal == false) {
                    break;
                }
            }
            if (equal) {
                return true;
            } else {
                rotate(mat, m, n);
            }
        }
        return false;
    }
};