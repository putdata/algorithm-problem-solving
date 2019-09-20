#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> vec(n);
    bool ok = false;
    for (int i = 0; i < n; i++) {
      cin >> vec[i];
      if (vec[i] == 2048) ok = true;
    }
    if (ok) {
      cout << "YES\n";
      continue;
    }
    ok = false;
    while(1) {
      bool change = false;
      sort(vec.begin(), vec.end());
      for (int i = 1; i < vec.size(); i++) {
        if (vec[i] == 2e9) break;
        if (vec[i] == vec[i - 1]) {
          vec[i - 1] = 2e9;
          vec[i] = vec[i] * 2;
          change = true;
          if (vec[i] == 2048) ok = true;
        }
      }
      if (ok || !change) break;
    }
    ok ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}