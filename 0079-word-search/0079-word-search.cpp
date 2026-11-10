class Solution {
public:
    bool solve(int r, int c, int ind,
               vector<vector<char>>& board, string& word) {
        if (ind == word.size()) {
            return true;
        }
        int n = board.size();
        int m = board[0].size();
        if (r < 0 || c < 0 || r >= n || c >= m ||
            board[r][c] != word[ind]) {
            return false;
        }
        char ch = board[r][c];
        board[r][c] = '#';
        bool found =
            solve(r + 1, c, ind + 1, board, word) ||
            solve(r - 1, c, ind + 1, board, word) ||
            solve(r, c + 1, ind + 1, board, word) ||
            solve(r, c - 1, ind + 1, board, word);
        board[r][c] = ch;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    if (solve(i, j, 0, board, word)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};