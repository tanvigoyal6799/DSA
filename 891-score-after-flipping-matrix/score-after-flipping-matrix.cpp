class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();

        // Step 1: Make first column all 1s
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < n; j++)
                    grid[i][j] ^= 1;
            }
        }

        int score = 0;

        // Step 2: Handle remaining columns
        for (int j = 0; j < n; j++) {
            int ones = 0;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 1)
                    ones++;
            }

            int maxOnes = max(ones, m - ones);
            score += maxOnes * (1 << (n - j - 1));
        }

        return score;
    }
};