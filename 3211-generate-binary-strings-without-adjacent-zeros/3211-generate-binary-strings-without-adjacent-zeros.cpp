class Solution {
public:
    void solve(int i, string& ds, int n, vector<string>& ans){
        if(i == n){
            ans.push_back(ds);
            return;
        }
        ds.push_back('1');
        solve(i+1, ds, n, ans);
        ds.pop_back();
        if(ds.empty() || ds.back() != '0'){
            ds.push_back('0');
            solve(i+1, ds, n, ans);
            ds.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string ds;
        solve(0, ds, n, ans);
        return ans;
    }
};