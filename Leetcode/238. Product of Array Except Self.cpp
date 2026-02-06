// Problem No: 238

//Approch:- 01 --- Brute Force
// Using Division Operator

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans;
        int n = nums.size();
        int zeroCnt = 0;
        int prod = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroCnt++;
            } else {
                prod *= nums[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0 && zeroCnt < 1) {
                ans.push_back(prod / nums[i]);
            } else if (nums[i] == 0) {
                if (zeroCnt > 1) {
                    ans.push_back(0);
                } else {
                    ans.push_back(prod);
                }
            } else if (zeroCnt > 0) {
                ans.push_back(0);
            }
        }
        return ans;
    }
};