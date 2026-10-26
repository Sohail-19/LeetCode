class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, vector<int>& arr, vector<int>& ds, int n, int target){
        if(i == n){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[i] <= target){
            ds.push_back(arr[i]);
            solve(i, arr, ds, n, target-arr[i]);
            ds.pop_back();
        }
        solve(i+1, arr, ds, n, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> ds;
        solve(0, candidates, ds, n, target);
        return ans;
    }
};