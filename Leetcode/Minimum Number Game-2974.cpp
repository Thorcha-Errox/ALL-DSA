// Problem No:- 2974

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        for(int i=0; i<n; i+=2){   
            swap(nums[i] , nums[i+1]);
        }
        return nums;
    }
};