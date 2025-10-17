//Program of valid palindrome II.

#include <bits/stdc++.h> 
bool validPalindrome(int n, string &s){
    // Write your code here.

    int st =0, ed = n-1,cnt =0;
    while(st<=ed){
        if(s[st]!= s[ed]){
            st++;
        }
        if(s[st] == s[ed]){
            cnt++;

        }
        st++;
        ed--;
    }
    if(cnt >= (n/2)){
        return 1;
    }
    else{
        return 0;
    }
}