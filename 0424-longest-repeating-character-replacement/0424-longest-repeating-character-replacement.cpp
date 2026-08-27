class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0, r = 0, maxLen = 0, maxFreq = 0;
        unordered_map<int,int> freq;
        while(r < n){
            freq[s[r]]++;
            maxFreq = max(maxFreq, freq[s[r]]);
            while(((r-l+1) - maxFreq) > k){
                freq[s[l]]--;
                l++;
            }
            maxLen  = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};