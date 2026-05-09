class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> prime(right + 1, true);
        prime[0] = prime[1] = false;
        for (int i = 2; i * i <= right; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    prime[j] = false;
                }
            }
        }
        vector<int> nums;
        for (int i = left; i <= right; i++) {
            if (prime[i]) nums.push_back(i);
        }
        if (nums.size() < 2) return {-1, -1};
        vector<int> ans = {-1, -1};
        int diff = INT_MAX;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[i - 1] < diff) {
                diff = nums[i] - nums[i - 1];
                ans = {nums[i - 1], nums[i]};
            }
        }
        return ans;
    }
};