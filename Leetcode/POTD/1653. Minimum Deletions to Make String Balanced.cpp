// Problem No:- 1653. Minimum Deletions to Make String Balanced

class Solution {
public:
    int minimumDeletions(string s) {

        int n = s.length();
        stack<char> temp;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!temp.empty() && s[i] == 'a' && temp.top() == 'b') {
                temp.pop();
                cnt++;
            } else {
                temp.push(s[i]);
            }
        }
        return cnt;
    }
};