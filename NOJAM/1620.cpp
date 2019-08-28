#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  map<string, int> mab;
  map<int, string> mab2;
  int n, m; cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    string s; cin >> s;
    mab[s] = i;
    mab2[i] = s;
  }
  while (m--) {
    string s; cin >> s;
    if (s[0] - '0' < 10) cout << mab2[atoi(s.c_str())] << '\n';
    else cout << mab[s] << '\n';
  }
  return 0;
}