class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> arr;
        for(auto row : grid){
            for(int x : row){
                arr.push_back(x);
            }
        }    
        int size = arr.size();
        k %= size;
        rotate(arr.rbegin(), arr.rbegin() + k, arr.rend());
        int idx = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                grid[i][j] = arr[idx++];
            }
        }
        return grid;
    }
};