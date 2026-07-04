class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size();
        int count = 0;
        for(auto s: patterns){
            if(word.contains(s)) count++;
        }
        return count;
    }
};