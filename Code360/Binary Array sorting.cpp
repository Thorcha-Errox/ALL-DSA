vector<int> sortBinaryArray(vector<int> arr, int n)  {
 	// Write your code here
	int zeroCnt =0, onecnt = 0;
	 for(int i=0;i<n;i++){
		 if(arr[i]==0){
			 zeroCnt++;
		 }
		 else{
			 onecnt++;
		 }
	 }
	 vector<int> ara;

	 while(zeroCnt!=0){
		 ara.push_back(0);
		zeroCnt--;
	 }
	 while(onecnt!=0){
		 ara.push_back(1);
		onecnt--;
	 }
	 return ara;
}