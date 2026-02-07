// Problem No:- 3828. Final Element After Subarray Deletions

class Solution {
public:
    int finalElement(vector<int>& nums) { 
        
        return max(nums[0], nums.back());
    }
};