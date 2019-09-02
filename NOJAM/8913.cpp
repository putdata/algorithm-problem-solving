#include <bits/stdc++.h>
using namespace std;

map<string, bool> mab;
bool foo(string s) {
  auto it = mab.find(s);
  if (it != mab.end()) return it->second;
  if (!s.size()) return 1;
  if (s.size() == 1) return 0;
  bool res = 0;
  int last = 0, i;
  for (i = 0; i < s.size(); i++) {
    if (s[i] != s[last]) {
      if (i - last > 1) res |= foo(s.substr(0, last) + s.substr(i));
      last = i;
    }
  }
  if (i - last > 1) res |= foo(s.substr(0, last));
  mab[s] = res;
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    cout << foo(s) << '\n';
  }
  return 0;
}