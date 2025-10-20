class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int n = s.length();
        int arr[26] = {0};
        int number =0;
        //find number of occurance and store it in array.
        for(int i=0; i<n; i++){
            number = s[i] - 'a';
            //increment the index value of the array;
            arr[number]++;
        }
        // find the maximum element in the array of count stored
        int maxi =-1, ans =0;
        for(int i=0; i<26; i++){
            if(maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
        return ans + 'a';
    }
};