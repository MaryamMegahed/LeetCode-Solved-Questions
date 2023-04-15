class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
         int n = piles.size(),Sum;
        vector dp(n + 1, vector<int>(k + 1));
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= k; j++) {
                Sum = 0;
                for (int currentCoins = 0; currentCoins <= min((int)piles[i - 1].size(),j); currentCoins++) {
                    if (currentCoins > 0) {
                        Sum += piles[i - 1][currentCoins - 1];
                    }
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - currentCoins]+Sum);
                }
            }
        }
        return dp[n][k];
    }
};