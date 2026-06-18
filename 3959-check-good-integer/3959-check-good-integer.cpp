class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareSum = 0;
        while(n>0){
            int digit = n%10;
            digitSum = digitSum + digit;
            squareSum = squareSum + (digit*digit);
            n = n/10;
        }
        int difference = squareSum - digitSum;
        if(difference >= 50) return true;
        else return false;
    }
};