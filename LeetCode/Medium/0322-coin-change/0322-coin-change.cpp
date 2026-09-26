class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int INF = 1e9;
        vector<int> dp(10001, INF);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (auto x : coins) {
                if (i - x < 0) continue;
                if (dp[i - x] != INF) dp[i] = min(dp[i], dp[i - x] + 1);
            }
        }
        return dp[amount] == INF ? -1 : dp[amount];
    }
};