vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    
    int n =a.size();
    sort(a.begin(),a.end());
    
    int repeating = -1;
    for(int i=0; i<n-1; i++){
        if(a[i]== a[i+1]){
            repeating = a[i];
            break;
        }
    }

    int count=1, missing = -1;
    for(int i =0; i<n; i++){
        if(a[i]==count){
            count++;
        }
        else if(a[i] > count){
            missing = count;
        }
    }
    if(missing == -1){
        missing = n;
    }

    vector<int> result;
    result.push_back(repeating);
    result.push_back(count);

    return result;
    
}