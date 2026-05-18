class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {

        vector<int> nums;

        for(char ch : s) {
            nums.push_back(ch - '0');
        }

        for(int i = 0; i < nums.size() - 1; i++) {

            if(abs(nums[i] - nums[i + 1]) > 2) {
                return false;
            }
        }

        return true;
    }
};