#include <bits/stdc++.h>
using namespace std;

int dp[502][502],ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    cin >> dp[1][1];
    for(int i=2; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cin >> dp[i][j];
            dp[i][j]+=max(+dp[i-1][j-1],dp[i-1][j]);
        }
    }
    for(int i=1; i<=n; i++) ans=max(ans,dp[n][i]);
    cout << ans;
    return 0;
}