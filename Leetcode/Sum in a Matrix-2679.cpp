// Problem No :- 2679

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        
        int row = nums.size();
        int col = nums[0].size();
        int score = 0;
        int maxi = INT_MIN;
        int startingCol = 0;
        int startingRow = 0;
        int endingCol = col-1;
        int endingRow = row-1;

        //sorting each row.
        for(int i = 0; i< row; i++){
            sort(nums[i].rbegin(), nums[i].rend());
        }

        while(startingCol<=endingCol){
            //Maximum in each Column
            for(int i = startingRow; i<= endingRow; i++){
                maxi = max(nums[i][startingCol], maxi);
            }
            score +=maxi;
            maxi = INT_MIN;
            startingCol++;
        }
    return score;
    }
};