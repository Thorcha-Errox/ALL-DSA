//Problem Remove Space
//Solved in 2 ways
//code:- 1
class Solution {
  public:
    bool isValid(char ch){
        return ((ch>= 'a' && ch<= 'z')||(ch >= 'A' && ch <= 'Z'));
    }
    string modify(string& s) {
        // code here.
        string temp ="";
        for(int i=0; i<s.length(); i++){
            if(isValid(s[i])){
                char ch = s[i];
                temp+= ch;
            }
        }
    return temp;
    }
};

// Code:- 2
class Solution {
  public:
    string modify(string& s) {
        // code here.
        string temp ="";
        for(int i=0; i<s.length(); i++){
            if((s[i]) != ' '){
                temp.push_back(s[i]);
            }
        }  
    return temp;
    }
};