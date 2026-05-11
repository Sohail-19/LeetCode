class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans = nums;
        vector<int> rev = nums;
        reverse(rev.begin(), rev.end());
        for(int x : rev){
            ans.push_back(x);
        }
        return ans;
    }
};