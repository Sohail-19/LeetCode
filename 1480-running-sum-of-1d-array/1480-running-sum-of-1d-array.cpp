class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j>=0; j--){
                sum += nums[j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};