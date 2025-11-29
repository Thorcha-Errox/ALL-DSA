// Problem No:- 268

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actualSum = 0;
        int val = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            actualSum += val;
            val--;
        }
        int missing = actualSum;
        for (int i = 0; i < nums.size(); i++) {
            missing -= nums[i];
        }
        return missing;
    }
};