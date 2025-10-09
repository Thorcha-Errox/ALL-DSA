// Problem no. 88

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m, j=0, k=0;
        while(i<m+n && j<n){
            if(nums1[i]==0){
                nums1.at(i++) = nums2[j++];
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};