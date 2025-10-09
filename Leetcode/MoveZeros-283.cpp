// Problem No 283.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =nums.size();
        int cnt =0;
        for(int i=0; i<n;i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        while(cnt != 0){
            int i=0;
            while(i<n-1){
                if(nums[i]==0){
                    swap(nums[i], nums[i+1]);
                }
            i++;
            }
        cnt--;
        }
        
    }
};