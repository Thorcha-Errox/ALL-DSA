class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int xor_full = 0;
        int xor_array = 0;
        
        for(int i =1; i<=arr.size()+1; i++){
            xor_full ^=i;
        }
        
        for(int  i = 0 ;i<arr.size();i++){
            xor_array ^=arr[i];
        }
        
        return xor_full^xor_array;
    }
};