// #include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int m , int arr2[],int n, int arr3[]){
    
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i<m){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j<n){
        arr3[k] = arr2[j];
        j++;
        k++;
    }   
}

void print(int arr3[], int o){
    for(int i=0; i<o; i++){
        cout<<arr3[i];
    }
    cout<<endl;
}
int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {};

    merge(arr1 , 5, arr2, 3, arr3);
    print(arr3,8);
}
