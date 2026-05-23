class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zeros = count(nums.begin(), nums.end(), 0);

        int ans = 0;

        for(int i = nums.size() - zeros; i < nums.size(); i++){
            ans += (nums[i] != 0);
        }

        return ans;
    }
};