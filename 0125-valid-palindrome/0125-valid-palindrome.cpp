class Solution {
public:
    bool isPalindrome(string s) {
        return check(s, 0, s.size() - 1);
    }
    bool check(const string& s, int l, int r){
        if(l >= r) return true;
        if(!isalnum(s[l])) return check(s, l+1, r);
        if(!isalnum(s[r])) return check(s, l, r-1);
        if(tolower(s[l]) != tolower(s[r])) return false;
        return check(s, l+1, r-1);
    }
};