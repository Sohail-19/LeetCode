class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> s;
        for(char ch: password){
            s.insert(ch);
        }
        int point = 0;
        for(char ch: s){
            if(ch>='a' && ch<='z') point += 1;
            else if(ch>='A' && ch<='Z') point += 2;
            else if(ch>='0' && ch<='9') point += 3;
            else point += 5;
        }
        return point;
    }
};