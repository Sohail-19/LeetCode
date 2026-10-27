class Solution {
public:
    void solve(int ind, vector<int>& arr, vector<int>& ds, int n, int target,
                    vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind; i<n; i++){
            if(i>ind && arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            solve(i+1, arr, ds, n, target-arr[i], ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0, candidates, ds, n, target, ans);
        return ans;
    }
};