#include <bits/stdc++.h> 
int stringMania(int n, int m, string str1, string str2) {
    // Write your code here.
    
    int i=0; 
    int j=0;
    while(i<n && j<m){
        if(str1[i] > str2[j]){
            return 1;
        }
        else if(str1[i] < str2[j]){
            return -1;
        }
        i++;
        j++;
    }
    if(n>m){
        return 1;
    }else if(m>n){
        return -1;
    }
    else{
        return 0;
    }
}
