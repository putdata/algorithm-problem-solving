#include <bits/stdc++.h>
using namespace std;

int solution(int alp, int cop, vector<vector<int>> problems) {
    vector<vector<int>> dp(200, vector<int>(200, 1e9));
    for (int i = 0; i <= alp; i++) for (int j = 0; j <= cop; j++) dp[i][j] = 0;
    int mx1 = 0, mx2 = 0;
    for (auto &p : problems) {
        mx1 = max(mx1, p[0]);
        mx2 = max(mx2, p[1]);
    }
    for (int i = alp; i <= 150; i++) {
        for (int j = cop; j <= 150; j++) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + 1);
            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + 1);
            for (auto &p : problems) if (p[0] <= i && p[1] <= j) {
                dp[min(i + p[2], 150)][min(j + p[3], 150)] = min(dp[min(i + p[2], 150)][min(j + p[3], 150)], dp[i][j] + p[4]);
            }
        }
    }
    int ans = 1e9;
    for (int i = mx1; i < 200; i++) for (int j = mx2; j < 200; j++) ans = min(ans, dp[i][j]);
    return ans;
}