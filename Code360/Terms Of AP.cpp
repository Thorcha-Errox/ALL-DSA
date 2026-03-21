#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {

    vector<int> ans;
    int n = 1;
    int cnt =0;

    while(cnt < x){
        int term = 3 * n + 2;  
        if(term % 4 != 0){
            ans.push_back(term);
            cnt++;
        }
        n++;
    }
    return ans;
}
