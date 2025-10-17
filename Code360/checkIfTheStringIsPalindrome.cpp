//Program to check if the string is palindrome
#include <bits/stdc++.h> 

int toLower(char ch){
    if(ch >= 'a' && ch<= 'z'){
        return ch;
    }
    else{
        char temp = ch -'A' +'a';
        return temp;
    }
}
bool validCharacter(char  ch){
    return ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')||(ch >= 'A' && ch <= 'Z'));
}
bool checkPalindrome(string s){
    // Write your code here.
    int m =0;
    int n = s.size()-1;
    while(m<=n){
        if(!validCharacter(s[m])){
            m++;
            continue;
        }
        if(!validCharacter(s[n])){
            n--;
            continue;
        }
        if(toLower(s[m]) != toLower(s[n])){
            return false;
        }
        m++;
        n--;
        
    }
    return true;
}