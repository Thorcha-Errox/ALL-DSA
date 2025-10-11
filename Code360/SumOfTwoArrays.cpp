#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int numofa = 0,numofb = 0;
	vector<int> ans;
	for(int i=0;i <n; i++){
		numofa = numofa*10 +a[i];
	}
	for(int i=0;i <m; i++){
		numofb = numofb*10 + b[i];
	}
	
	int addition = numofa+numofb;

	while(addition>0){
		ans.push_back(addition%10);
		addition/=10;
	}
	reverse(ans.begin(), ans.end());
	return ans;

}