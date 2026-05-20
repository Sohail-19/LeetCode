class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n), f1(n + 1, 0), f2(n + 1, 0);
        for(int i = 0; i < n; i++){
            f1[A[i]]++;
            f2[B[i]]++;
            int cnt = 0;
            for(int x = 1; x <= n; x++){
                if(f1[x] && f2[x]) cnt++;
            }
            ans[i] = cnt;
        }
        return ans;
    }
};