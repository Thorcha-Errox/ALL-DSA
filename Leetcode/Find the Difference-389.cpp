//Problem No:- 389 

// Solution - 1
// Bit Manipulation using XOR
class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        for(char &ch : t){
            result ^= ch;
        }
        for(char &ch : s){
            result ^= ch;
        }
        return result;
    }
};

// Solution - 2
// ASCII Sum Difference Technique 
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum =0;

        for(char &ch : t){
            sum += ch;
        }
        for(char &ch : s){
            sum -= ch;
        }
        return (char)(sum);
    }
};