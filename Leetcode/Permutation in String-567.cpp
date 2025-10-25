// Problem No:- 567

class Solution {
private:
    bool checkEqual(int a[26], int b[26]){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        // char count of s1.
        int count1[26]= {0};
        for(int i=0; i<s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // traverse the s2 and count the char in particular windowSize
        int i=0, windowSize = s1.length();
        int count2[26] = {0};
        while(i< windowSize && i< s2.length()){
            int index = s2[i] -'a';
            count2[index]++;
            i++;
        }
        if(checkEqual(count1, count2)){
            return 1;
        }

        // Move the window forward to check the further char of S2
        while(i < s2.length()){
            //incremention the count of new char in the window
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;
            // removing count of old char in the window
            char oldChar = s2[i-windowSize];
            int index2 = oldChar -'a';
            count2[index2]--;
            i++;
            // check if equal or not
            if(checkEqual(count1, count2)){
                return 1;
            }
        }
        return 0;
    }
};