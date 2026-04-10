// Problem No:- 3740. Minimum Distance Between Three Equal Elements I

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        int ans = INT_MAX;
        for (auto m : mp) {
            auto arr = m.second;
            if (arr.size() >= 3) {
                for (int i = 0; i < arr.size() - 2; i++) {
                    int temp = abs(arr[i] - arr[i + 1]) +
                               abs(arr[i + 1] - arr[i + 2]) +
                               abs(arr[i + 2] - arr[i]);
                    ans = min(ans, temp);
                }
            }
        }
        if (ans == INT_MAX) {
            return -1;
        }
        return ans;
    }
};