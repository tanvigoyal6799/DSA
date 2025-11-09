class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> result(n, 1);

        // Left to right
        for (int i = 1; i < n; i++)
            if (ratings[i] > ratings[i - 1])
                result[i] = result[i - 1] + 1;

        // Right to left
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1] && result[i] <= result[i + 1])
                result[i] = result[i + 1] + 1;
        }

        int total = 0;
        for (int x : result)
            total += x;

        return total;

    }
};
