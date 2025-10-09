// #include<bits/stdc++.h>
#include<iostream>

using namespace std;

void movezero(int arr[] , int n){
    
    int cnt =0;
    for(int i=0; i<n ;i++){
        if(arr[i]==0){
            cnt++;
        }
    }
    while(cnt!= 0){
    int i=0;
        while(i<n-1){
            if(arr[i] == 0){
                swap(arr[i], arr[i+1]);
            }
            i++;
        }
        cnt--;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){
    int arr[5] = {0,1,0,3,12};
    
    movezero(arr ,5);
    print(arr,5);
}
