class Solution {
public:
    bool isPrime(int x){
        if(x < 2) return false;
        for(int i = 2; i * i <= x; i++){
            if(x % i == 0) return false;
        }
        return true;
    }
    int reverseNum(int n){
        int r = 0;
        while(n){
            r = r * 10 + n % 10;
            n /= 10;
        }
        return r;
    }
    int sumOfPrimesInRange(int n) {
        int r = reverseNum(n);
        int l = min(n, r), h = max(n, r);
        int sum = 0;
        for(int i = l; i <= h; i++){
            if(isPrime(i)) sum += i;
        }
        return sum;
    }
};