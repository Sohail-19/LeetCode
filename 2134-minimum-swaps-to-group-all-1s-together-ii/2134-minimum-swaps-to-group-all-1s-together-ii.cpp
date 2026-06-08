class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones = 0;
        for(int x : nums){
            if(x == 1) ones++;
        }
        if(ones <= 1) return 0;
        int n = nums.size();
        int zeros = 0;
        for(int i = 0; i < ones; i++){
            if(nums[i] == 0) zeros++;
        }
        int ans = zeros;
        for(int i = ones; i < n + ones; i++){
            if(nums[(i - ones) % n] == 0) zeros--;
            if(nums[i % n] == 0) zeros++;
            ans = min(ans, zeros);
        }
        return ans;
    }
};