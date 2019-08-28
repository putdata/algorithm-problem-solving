#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a[16][2];
  for (int cur = 0, i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      a[cur][0] = i;
      a[cur++][1] = j;
    }
  }
  int ans = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      char x; cin >> x;
      if (x == '.') continue;
      ans += abs(a[x - 'A'][0] - i) + abs(a[x - 'A'][1] - j);
    }
  }
  cout << ans;
  return 0;
}