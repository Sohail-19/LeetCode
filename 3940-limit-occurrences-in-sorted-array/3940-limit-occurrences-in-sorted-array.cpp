class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int x: nums){
            mpp[x]++;
            if(mpp[x]<=k) ans.push_back(x);
        } 
        return ans;
    }
};