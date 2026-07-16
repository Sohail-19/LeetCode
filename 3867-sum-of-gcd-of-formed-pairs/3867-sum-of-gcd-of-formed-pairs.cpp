class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int maxi = 0;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, nums[i]);
            prefixGcd[i] = gcd(nums[i], maxi);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int left = 0;
        int right = n - 1;
        long long ans = 0;
        while(left < right){
            ans += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }
        return ans;
    }
};