class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        
        vector<int> ans;
        sort(arr.begin(), arr.end());
        
        for(int i=0; i < arr.size()-1; i++){
        int j = i+1;
            if(arr[i] == arr[j]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
        
    }
};