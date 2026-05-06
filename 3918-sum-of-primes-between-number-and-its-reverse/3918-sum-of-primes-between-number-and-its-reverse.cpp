class Solution {
public:
    bool isPrime(int x){
        if(x < 2) return false;
        if(x == 2) return true;
        if(x % 2 == 0) return false;
        for(int i = 3; i * i <= x; i += 2){
            if(x % i == 0) return false;
        }
        return true;
    }

    int sumOfPrimesInRange(int n) {
        int r = 0, x = n;
        while(x){
            r = r * 10 + x % 10;
            x /= 10;
        }
        int l = min(n, r), h = max(n, r);
        int sum = 0;
        for(int i = l; i <= h; i++){
            if(isPrime(i)) sum += i;
        }
        return sum;
    }
};