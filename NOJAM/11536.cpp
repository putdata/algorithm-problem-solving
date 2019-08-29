#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  bool inc = true, dec = true;
  string s; cin >> s;
  for (int i = 1; i < n; i++) {
    string x; cin >> x;
    inc &= s.compare(x) < 0;
    dec &= s.compare(x) > 0;
    s = x;
  }
  if (!inc && !dec) cout << "NEITHER";
  else inc ? cout << "INCREASING" : cout << "DECREASING";
  return 0;
}