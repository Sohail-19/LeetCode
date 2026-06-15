class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        while(s.size() % k){
            s += fill;
        }
        vector<string> ans;
        for(int i = 0; i < s.size(); i += k){
            string temp = "";
            for(int j = i; j < i + k; j++){
                temp += s[j];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};