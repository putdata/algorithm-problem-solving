#include <bits/stdc++.h>
#define fir first
#define sec second
using namespace std;

typedef long long ll;

int main() {
  int n; cin >> n;
  pair<ll, ll> p[n];
  ll dp[n][n];
  memset(dp, 0, sizeof(dp));
  for (int i = 0; i < n; i++) {
    ll x, y; cin >> x >> y;
    p[i] = {x, y};
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      dp[j][j + i] = 1e11;
      for (int k = j + 1; k <= j + i; k++) {
        dp[j][j + i] = min(dp[j][j + i], dp[j][k - 1] + dp[k][j + i] + p[j].fir * p[k - 1].sec * p[j + i].sec);
      }
    }
  }
  cout << dp[0][n - 1];
  return 0;
}