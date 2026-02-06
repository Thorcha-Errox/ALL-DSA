// Problem No:- 3634
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i=0;
        int j=0;
        int len= INT_MIN;
        while( j < n){
            int minEle = nums[i];
            int maxEle = nums[j];
            while(i < j && maxEle > (long long) k*minEle){
                i++;
                minEle = nums[i];
            }
            len = max(len , (j-i+1));
            j++;
        }
        return n-len;
    }
};