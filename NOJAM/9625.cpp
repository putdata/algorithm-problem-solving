#include <bits/stdc++.h>
using namespace std;

int main() {
    int K; cin >> K;
    int dp[50][2]={{1,0},{0,1}};
    for(int i=2; i<=K; i++) {
        auto [x1,y1] = dp[i-2];
        auto [x2,y2] = dp[i-1];
        dp[i][0]=x1+x2;
        dp[i][1]=y1+y2;
    }
    cout << dp[K][0] << ' ' << dp[K][1];
    return 0;
}