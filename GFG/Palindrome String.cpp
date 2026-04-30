class Solution {
  public:
    bool checkPalindrome(string& s, int i, int j){
        
        if(i >= j){
            return 1;
        }
        if(s[i] != s[j]){
            return 0;
        } else{
            return checkPalindrome(s, ++i, --j);
        }
        
    }
    
    bool isPalindrome(string& s) {
        return checkPalindrome(s, 0, s.length()-1);
    }
};