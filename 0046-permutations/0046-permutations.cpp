class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& ds, vector<int>& nums, vector<int>& freq){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                solve(ds, nums, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<int> freq(nums.size(), 0);        
        solve(ds, nums, freq);
        return ans;
    }
};