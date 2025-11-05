#include<iostream>
using namespace std;
void greatestRowSum(int arr[][3],int m, int n){
    int sum =0;
    int greater = 1;
    int num = 0;
    for(int row =0; row <4; row++){
        for(int col = 0; col<3; col++){
            sum += arr[row][col];
        }
        if(greater < sum){
            greater = sum;
            num=row;
        }
        sum =0;
    }
    cout<<greater<<endl;;
    cout<<"At row number:- "<<num;
}
int main(){
    int arr[4][3]= {{3,4,11},
                {2,12,1},
                {7,8,7},
                {1,1,1}};
cout<<"Greatest Row Sum:- ";
    greatestRowSum(arr,4,3);
}