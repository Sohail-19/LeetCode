class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            maxi = max(maxi,nums[i]);
            prefix[i] = maxi;
        }
        for(int i=n-1; i>=0; i--){
            mini = min(mini,nums[i]);
            suffix[i] = mini;
        }
        for(int i=0; i<n; i++){
            if(prefix[i] - suffix[i] <= k) return i;
        }
        return -1;
    }
};