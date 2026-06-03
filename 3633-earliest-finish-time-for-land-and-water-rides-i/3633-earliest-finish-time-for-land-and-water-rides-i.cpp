class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        int n = landStartTime.size();
        int m = waterStartTime.size();
        for(int i = 0; i < n; i++) {
            int finishLand = landStartTime[i] + landDuration[i];
            for(int j = 0; j < m; j++) {
                int finishTime =
                    max(finishLand, waterStartTime[j])
                    + waterDuration[j];

                ans = min(ans, finishTime);
            }
        }
        for(int j = 0; j < m; j++) {
            int finishWater = waterStartTime[j] + waterDuration[j];
            for(int i = 0; i < n; i++) {
                int finishTime =
                    max(finishWater, landStartTime[i])
                    + landDuration[i];

                ans = min(ans, finishTime);
            }
        }
        return ans;
    }
};