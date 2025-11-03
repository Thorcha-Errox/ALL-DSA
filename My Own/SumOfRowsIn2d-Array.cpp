#include<iostream>
using namespace std;
void printRowSum(int arr[][3], int row,int col){
    cout<<"Printing Row Sum----->"<<endl;
    for(int row=0; row<4; row++){
        int sum=0;
        for(int col =0; col <3; col++){
            sum+= arr[row][col];
        }
        cout<<sum<<" ";
        
    }
}
void printColSum(int arr[][3], int row,int col){
    cout<<"Printing Col Sum----->"<<endl;
    for(int col=0; col<3; col++){
        int sum=0;
        for(int row =0; row <4; row++){
            sum+= arr[row][col];
        }
        cout<<sum<<" ";
        
    }
}
int main(){
    int arr[4][3]= {{3,4,11},
                    {2,12,1},
                    {7,8,7},
                    {1,1,1}};

    for(int row=0; row<4; row++){
        for(int col =0; col <3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    printRowSum(arr,4,3);
    cout<<endl;
    printColSum(arr,4,3);

    return 0;
}