// Problem No:- 31

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int index = -1;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                index = i - 1;
                break;
            }
        }

        if (index != -1) {
            int swap_index = index;
            for (int j = nums.size() - 1; j >= index + 1; j--) {
                if (nums[index] < nums[j]) {
                    swap_index = j;
                    break;
                }
            }
            swap(nums[swap_index], nums[index]);
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};