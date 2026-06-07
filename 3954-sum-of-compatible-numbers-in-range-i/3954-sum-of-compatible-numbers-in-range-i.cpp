class Solution {
public:
    long long sumOfGoodIntegers(int n, int k) {
        int ans = 0;
        int i = max(1, n - k);
        int j = n + k;
        for(int x = i; x <= j; x++) {
            if((n & x) == 0)
                ans += x;
        }
        return ans;
    }
};