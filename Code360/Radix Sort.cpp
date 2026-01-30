#include <bits/stdc++.h> 
vector<int> radixSort(int n, vector<int>& arr) {
    // Write your code here.

    int mx = *max_element(arr.begin(), arr.end());
    for(int exp = 1; mx/exp >0; exp *=10){
        vector<int> output(n);
        int count[10] = {0};
        for(int i=0 ; i<n; i++){
            int index = (arr[i]/exp)%10;
            count[index]++;
        }
        for(int i=1 ; i< 10; i++){
            count[i] += count[i-1];
        }
        for(int i = n-1; i >= 0; i--){
            int index = (arr[i]/exp) %10;
            output[count[index]-1] = arr[i];
            count[index]--;
        }
        for(int i=0; i < n ; i++){
            arr[i] = output[i];
        }
    }

    return arr;
    
}
