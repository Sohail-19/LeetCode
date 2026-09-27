class Solution {
public:
    bool checkif(vector<int>& nums, int i, int count) {
        if(i == nums.size()) {
            if(nums.back() > nums[0]) count++;
            return count <= 1;
        }
        if(nums[i] < nums[i-1])
            count++;
        if(count > 1)
            return false;
        return checkif(nums, i+1, count);
    }

    bool check(vector<int>& nums) {
        return checkif(nums, 1, 0);
    }
};