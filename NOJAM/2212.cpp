#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k;
  cin >> n >> k;
  int s[n];
  for (int i = 0; i < n; i++) cin >> s[i];
  sort(s, s + n);
  n = unique(s, s + n) - s;
  int ans = s[n - 1] - s[0];
  for (int i = n - 1; i > 0; i--) s[i] -= s[i - 1];
  sort(s + 1, s + n, greater<int>());
  for (int i = 1; i < n && --k; i++) ans -= s[i];
  cout << ans;
  return 0;
}