//Leetcode Number - 125

class Solution {
public:
    char toLowercase(char ch){
        char temp;
        if(ch >='A' && ch <= 'Z') return ch - 'A' +'a';
        return ch;
    }

    bool isValidCharacter(char ch){
        return ((ch >= 'a' && ch<= 'z') || 
                (ch>= 'A' && ch <= 'Z') || 
                (ch >= '0' && ch <= '9'));
    }

    bool isPalindrome(string s) {
        
        int st =0, end = s.size()-1;
        while(st <= end){

            if(!isValidCharacter(s[st])){
                st++;
                continue;
            }
            if(!isValidCharacter(s[end])){
                end--;
                continue;
            }
            if(toLowercase(s[st])!= toLowercase(s[end])){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};