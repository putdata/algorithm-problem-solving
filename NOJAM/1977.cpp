#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int m, n; cin >> m >> n;
  int sum = 0, mini = 1e9;
  for (int i = 1; i * i <= n; i++) {
    if (i * i >= m) {
      sum += i * i;
      mini = min(mini, i * i);
    }
  }
  sum == 0 ? cout << -1 : cout << sum << '\n' << mini;
  return 0;
}