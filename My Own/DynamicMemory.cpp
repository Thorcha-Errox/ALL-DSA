#include <iostream>
using namespace std;
// int getSum(int *arr, int n){
//     int sum=0;
//     for(int i=0 ; i<n; i++){
//         sum+=arr[i];
//     }
//     return sum;
// }

//Pass by reference 
void getSum1(int *arr, int n, int& sum){
    for(int i=0 ; i<n; i++){
        sum+=arr[i];
    }
}
int main(){
    int n;
    int sum =0;
    cin >> n; 

    // Dynamic Memory Allocation
    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int ans = getSum(arr,n);
    getSum1(arr,n, sum);
    cout<< sum;
return 0;
}