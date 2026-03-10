// Problem No:- 202 Happy Number

class Solution {
public:
    int sqrSum(int n) {
        int sum = 0;
        while (n != 0) {
            int num = n % 10;
            sum += (num) * (num);
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> visited;

        while (n != 1 && visited.find(n) == visited.end()) {
            visited.insert(n);
            n = sqrSum(n);
        }
        return n == 1;
    }
};