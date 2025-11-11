// Problem No:- 3110
class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0; i<s.length()-1; i++){
            score += max(s[i],s[i+1])- min(s[i],s[i+1]);
        }
        return score;
    }
};