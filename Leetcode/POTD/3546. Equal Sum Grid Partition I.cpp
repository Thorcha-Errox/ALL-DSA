// Problem No:- 3546. Equal Sum Grid Partition I

class Solution {
public:
typedef long long ll;
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<ll> rowSum(m, 0);
        vector<ll> colSum(n, 0);
        ll totalSum = 0;

        // Row Sum + Column Sum + Total Sum in One Pass
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                totalSum += grid[i][j];
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            }
        }

        if (totalSum % 2 != 0) {
            return 0;
        }
        ll upper = 0;
        ll lower = 0;

        // Row Check
        for (int i = 0; i < m - 1; i++) {
            upper += rowSum[i];
            lower = totalSum - upper;
            if (upper == lower) {
                return 1;
            }
        }
        // Column Check
        upper = 0;
        lower = 0;
        for (int i = 0; i < n - 1; i++) {
            upper += colSum[i];
            lower = totalSum - upper;
            if (upper == lower) {
                return 1;
            }
        }
        return 0;
    }
};