class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0, counter = 0;
        for(auto &e : events){
            if(counter >= 10) break;
            if(e == "W") counter++;
            else if(e == "WD" || e == "NB") score++;
            else score += e[0] - '0';
        }
        return {score, counter};
    }
};