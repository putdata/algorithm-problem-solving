#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    for(int i = 1; i <= T; i++) {
        int p, q; cin >> p >> q;
        long long dp[10001] = {0, 1, 1};
        for(int i = 3; i <= p; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % q;
        }
        cout << "Case #" << i << ": " << dp[p] % q << "\n";
    }
    return 0;
}