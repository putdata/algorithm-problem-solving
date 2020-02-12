#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    map<string, int> m;
    int n; cin >> n;
    while (n--) {
      string a, b; cin >> a >> b;
      m[b]++;
    }
    int ans = 1;
    for (auto it : m) {
      ans *= it.second + 1;
    }
    cout << ans - 1 << '\n';
  }
  return 0;
}