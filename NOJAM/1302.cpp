#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> mab;
  int n; cin >> n;
  int cur = -1e9;
  string ans;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    int cnt = ++mab[s];
    if (cnt > cur) {
      cur = cnt;
      ans = s;
    } else if (cnt == cur && s < ans) ans = s;
  }
  cout << ans;
  return 0;
}