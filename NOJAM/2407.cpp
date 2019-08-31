#include <bits/stdc++.h>
using namespace std;

string foo(string a, string b) {
  int sum = 0;
  string res = "";
  while (!a.empty() || !b.empty() || sum) {
    if (!a.empty()) {
      sum += a.back() - '0';
      a.pop_back();
    }
    if (!b.empty()) {
      sum += b.back() - '0';
      b.pop_back();
    }
    res.insert(res.begin(), char((sum % 10) + '0'));
    sum /= 10;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  string dp[101][101];
  dp[1][0] = dp[1][1] = "1";
  for (int i = 2; i <= 100; i++) {
    dp[i][0] = dp[i][i] = "1";
    for (int j = 1; j < i; j++) dp[i][j] = foo(dp[i - 1][j - 1], dp[i - 1][j]);
  }
  cout << dp[n][m];
  return 0;
}