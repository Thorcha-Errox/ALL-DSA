//Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] 
//that do not appear in nums.
// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]
// Example 2:
// Input: nums = [1,1]
// Output: [2]

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        // temp vector with all elements in reverse order from n to 1
        vector<int> temp;
        for (int i = nums.size(); i > 0; i--) {
            temp.push_back(i);
        }
        
        vector<int> ans;
        // Sorting the nums array and then checking it with the temp array
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            for (int j = temp.size() - 1; j >= 0; j--) {
                if (current == temp[j]) {
                    temp.pop_back();
                    break;
                } else if (current > temp[j]) {
                    ans.push_back(temp[j]);
                    temp.pop_back();
                } else {
                    break;
                }
            }
        }
        // If temp is not empty, then push its elements to the ans array
        while (!temp.empty()) {
            ans.push_back(temp.back());
            temp.pop_back();
        }
        return ans;
    }
};