int findFirstRepeating(vector<int>& arr, int n) {
    // Write your code here
    int cnt =0 ,dup = -1;
    for(int i =0; i<n-1; i++){

        for(int j =i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cnt++;
                dup = arr[i];
                break;
            }
        }
        if(cnt>0){
            break;
        }
    }
    return dup;
}