class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        
        for (int l = 1; l <= k; l++) {
            int temp = grid[n - 1][m - 1];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    int curr = grid[i][j];
                    grid[i][j] = temp;
                    temp = curr;
                }
            }
        }

        return grid;
    }
};