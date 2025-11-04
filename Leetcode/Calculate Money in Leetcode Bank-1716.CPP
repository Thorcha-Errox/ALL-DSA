// Problem No:- 1716

class Solution {
public:
    int totalMoney(int n) {
        int result =0;
        int intialMonday = 1;
        while(n>0){
            int money = intialMonday;
            for(int i=1; i<=min(n,7); i++){
                result+= money;
                money++;
            }
            n= n-7;
            intialMonday++;
        }
    return result;
    }
};