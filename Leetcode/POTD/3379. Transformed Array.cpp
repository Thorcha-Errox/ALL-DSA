// Problem No:- 3379

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> result(n, 0);
        int index = 0;
        for (int i = 0; i < n; i++) {
            int tarIdx = nums[i] % n;
            int index = (i + tarIdx) % n;
            if (index < 0) {
                index += n;
            }
            result[i] = nums[index];
        }
        return result;
    }
};