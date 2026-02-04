// 3640. Trionic Array II
// You are given an integer array nums of length n.
// A trionic subarray is a contiguous subarray nums[l...r] (with 0 <= l < r < n) for which there exist indices l < p < q < r such that:
// nums[l...p] is strictly increasing,
// nums[p...q] is strictly decreasing,
// nums[q...r] is strictly increasing.
// Return the maximum sum of any trionic subarray in nums.

// Example 1:
// Input: nums = [0,-2,-1,-3,0,2,-1]
// Output: -4
// Explanation:
// Pick l = 1, p = 2, q = 3, r = 5:
// nums[l...p] = nums[1...2] = [-2, -1] is strictly increasing (-2 < -1).
// nums[p...q] = nums[2...3] = [-1, -3] is strictly decreasing (-1 > -3)
// nums[q...r] = nums[3...5] = [-3, 0, 2] is strictly increasing (-3 < 0 < 2).
// Sum = (-2) + (-1) + (-3) + 0 + 2 = -4.

// Example 2:
// Input: nums = [1,4,2,7]
// Output: 14
// Explanation:
// Pick l = 0, p = 1, q = 2, r = 3:
// nums[l...p] = nums[0...1] = [1, 4] is strictly increasing (1 < 4).
// nums[p...q] = nums[1...2] = [4, 2] is strictly decreasing (4 > 2).
// nums[q...r] = nums[2...3] = [2, 7] is strictly increasing (2 < 7).
// Sum = 1 + 4 + 2 + 7 = 14.
 
// Constraints:
// 4 <= n = nums.length <= 105
// -109 <= nums[i] <= 109
// It is guaranteed that at least one trionic subarray exists.

class Solution {
public:
    vector<vector<long long>> memo;
    long long solve(int i, int trend, vector<int>& nums) {
        int n = nums.size();
        if (i == n) {
            if (trend == 3) {
                return 0;
            } else {
                return LLONG_MIN / 2;
            }
        }

        if (memo[i][trend] != LLONG_MIN) {
            return memo[i][trend];
        }

        long long take = LLONG_MIN / 2;
        long long skip = LLONG_MIN / 2;
        
        if (trend == 0) {
            skip = solve(i + 1, 0, nums);
        }
        if (trend == 3) {
            take = nums[i];
        }
        if (i + 1 < n) {
            int curr = nums[i];
            int next = nums[i + 1];

            if (trend == 0 && next > curr) {
                take = max(take, curr + solve(i + 1, 1, nums));
            } else if (trend == 1) {
                if (next > curr) {
                    take = max(take, curr + solve(i + 1, 1, nums));
                } else if (next < curr) {
                    take = max(take, curr + solve(i + 1, 2, nums));
                }
            } else if (trend == 2) {
                if (next < curr) {
                    take = max(take, curr + solve(i + 1, 2, nums));
                } else if (next > curr) {
                    take = max(take, curr + solve(i + 1, 3, nums));
                }
            } else if (trend == 3 && next > curr) {
                take = max(take, curr + solve(i + 1, 3, nums));
            }
        }
        return memo[i][trend] = max(take, skip);
    }

    long long maxSumTrionic(vector<int>& nums) {

        int n = nums.size();
        memo.assign(n + 1, vector<long long>(4, LLONG_MIN));
        return solve(0, 0, nums);
    }
};

