#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, a[1000][5];
  bool chk[1000][1000] = {};
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++)
      cin >> a[i][j];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < n; k++) {
        if (i == k) continue;
        if (a[i][j] == a[k][j]) chk[i][k] = 1;
      }
    }
  }
  int ans[2] = {-1, -1};
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (chk[i][j]) cnt++;
    }
    if (cnt > ans[0]) {
      ans[0] = cnt;
      ans[1] = i;
    }
  }
  cout << ans[1] + 1;
  return 0;
}