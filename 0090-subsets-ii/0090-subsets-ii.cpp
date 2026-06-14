class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;
        for(int mask = 0; mask < (1 << n); mask++) {
            vector<int> temp;
            for(int i = 0; i < n; i++) {
                if(mask & (1 << i)) {
                    temp.push_back(nums[i]);
                }
            }
            sort(temp.begin(), temp.end());
            st.insert(temp);
        }
        return vector<vector<int>>(st.begin(), st.end());
    }
};