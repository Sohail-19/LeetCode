class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int i = 0;
        int n = words.size();
        while(i < n) {
            int j = i;
            int letters = 0;
            while(j < n && letters + words[j].size() + (j - i) <= maxWidth) {
                letters += words[j].size();
                j++;
            }
            int gaps = j - i - 1;
            string line;
            if(j == n || gaps == 0) {
                for(int k = i; k < j; k++) {
                    line += words[k];
                    if(k + 1 < j) line += ' ';
                }
                line.append(maxWidth - line.size(), ' ');
            }
            else {
                int totalSpaces = maxWidth - letters;
                int each = totalSpaces / gaps;
                int extra = totalSpaces % gaps;
                for(int k = i; k < j; k++) {
                    line += words[k];

                    if(k < j - 1) {
                        line.append(each + (extra > 0), ' ');
                        if(extra > 0) extra--;
                    }
                }
            }
            ans.push_back(line);
            i = j;
        }
        return ans;
    }
};