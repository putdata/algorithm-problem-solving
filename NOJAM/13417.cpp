#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n - 1; i++) {
      char x; cin >> x;
      if (x <= s.front()) s = x + s;
      else s.push_back(x);
    }
    cout << s << '\n';
  }
  return 0;
}