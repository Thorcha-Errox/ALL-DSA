//binary search implementation

bool isPossible(vector<int> v, int h, int mid){
    int time = 0;
    // int midCount = 1;
    for(int i=0; i<v.size(); i++){
        time += v[i]/mid;
        if(v[i]%mid){
            time++;
        }
        if(time > h){
            return false;
        }
    }
    return time<=h;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int maxi = *max_element(v.begin(), v.end());

    int s = 1, e = maxi, ans =maxi;
    while(s <= e){
        int mid = s+(e-s)/2;

        if(isPossible(v,h,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}