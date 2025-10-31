// Problem No :- 414

class Solution {
public:
    int thirdMax(vector<int>& nums) {
       
        int cnt =0;
        int n = nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0; i<n-1; i++){
            if(nums[i]> nums[i+1]){
                cnt++;
                if(cnt == 2){
                    return nums[i+1];
                }
            }   
        }

        return nums[0];

    }
};