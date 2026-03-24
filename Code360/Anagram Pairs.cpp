#include <algorithm>
bool isAnagram(string str1, string str2)
{
    //Write your code here
    if(str1.length() != str2.length()){
        return false;
    } else{
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        for(int i =0; i < str1.length(); i++){
            if(str1[i] != str2[i]){
                return false;
            }
        }
    }
    return true;
}