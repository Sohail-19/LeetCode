class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long long odd = 0;
        long long even = 1;
        long long sum = 0;
        long long count = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum % 2 != 0) {
                count = (count + even) % MOD;
                odd = (odd + 1) % MOD;
            }
            else {
                count = (count + odd) % MOD;
                even = (even + 1) % MOD;
            }
        }
        return count;
    }
};