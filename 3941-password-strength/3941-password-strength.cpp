class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> st(password.begin(),password.end());
        int point = 0;
        for(char x: st){
            if(x>= 'a' && x<= 'z') point=point+1;
            else if(x>= 'A' && x<= 'Z') point=point+2;
            else if(x>= '0' && x<= '9') point=point+3;
            else point=point+5;
        }
        return point;
    }
};