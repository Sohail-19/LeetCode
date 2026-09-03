class Solution {
public:
    string minWindow(string s, string t) {
        int m = t.size();
        int n = s.size();
        vector<int> freq(256,0);
        for(int i=0; i<m; i++){
            freq[t[i]]++;
        }
        int l = 0, r = 0;
        int cnt = 0;
        int sIndex = -1;
        int minLen = INT_MAX;
        while(r < n){
            if(freq[s[r]] > 0) cnt++;
            freq[s[r]]--;
            while(cnt == m){
                if(r-l+1 < minLen){
                    minLen = r-l+1;
                    sIndex = l;
                }
                freq[s[l]]++;
                if(freq[s[l]] > 0) cnt--;
                l++;
            }
            r++;
        }
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};