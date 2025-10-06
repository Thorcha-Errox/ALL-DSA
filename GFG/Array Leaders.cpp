class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        
        int n = arr.size();
        int larg = arr[n-1];
        
        vector<int> aa;
        
        aa.push_back(larg);
        
        for(int i = n-2; i>=0;i--){
            
            if(arr[i]>=larg){
                larg = arr[i];
                aa.push_back(larg);
            }
            
        }
        vector<int> ans;
        for(int i = aa.size()-1 ; i >=0; i--){
            ans.push_back(aa[i]);
        }
        
        return ans;
    }
};