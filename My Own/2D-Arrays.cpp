#include <iostream>
using namespace std;
// Function to find the target element :---
bool isFound(int arr[3][4],int target, int row , int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(target == arr[i][j]){
                return 1;
            } 
        }
    }
    return 0;
}

int main() {
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,1,2,3};
	// int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //Taking Input here:- column Wise.
// 	for(int col =0; col<4; col++) {
// 		for(int row=0; row < 3; row++) {
// 			cin>> arr[row][col];
// 		}
// 	}
    //Taking input here:-  row wise.
// 	for(int row =0; row<3; row++) {
// 		for(int col=0; col < 4; col++) {
// 			cin>> arr[row][col];
// 		}
// 	}
    cout<<endl;
    // Giving Output here:- row wise
	for(int row =0; row<3; row++) {
		for(int col=0; col < 4; col++) {
			cout << arr[row][col] << " ";
		}
		cout<<endl;
	}
    cout<<endl;
    // Giving Output here:- column wise
	// for(int col =0; col<4; col++) {
	// 	for(int row=0; row < 3; row++) {
	// 		cout << arr[row][col] << " ";
	// 	}
	// 	cout<<endl;
	// }

    // Finding the target:---
    int target;
    cout<<"Enter the target:- ";
    cin>>target;

    if(isFound(arr,target ,3,4)){
        cout<<"Element Found"; 
    }
    else cout<<"Not Found";

	return 0;
}