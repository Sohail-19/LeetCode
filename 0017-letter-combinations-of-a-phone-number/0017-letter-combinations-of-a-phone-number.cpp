class Solution {
public:
    vector<string> ans;
    void solve(int ind, string& digits, string& ds, vector<string>& mapping) {
        if (ind == digits.size()) {
            ans.push_back(ds);
            return;
        }
        string letters = mapping[digits[ind] - '0'];
        for (int i = 0; i < letters.size(); i++) {
            ds.push_back(letters[i]);
            solve(ind + 1, digits, ds, mapping);
            ds.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        string ds = "";
        solve(0, digits, ds, mapping);
        return ans;
    }
};