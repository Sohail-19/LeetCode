class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind, int k, int n, vector<int>& ds) {
        if (ds.size() == k) {
            if (n == 0) {
                ans.push_back(ds);
            }
            return;
        }
        for (int i=ind; i<=9; i++) {
            if (i > n) break;
            ds.push_back(i);
            solve(i + 1, k, n - i, ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        solve(1, k, n, ds);
        return ans;
    }
};