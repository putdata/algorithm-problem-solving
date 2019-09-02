#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    bool ok = true;
    for (int i = 0; i < n - 1; i++) {
      ok &= vec[i + 1].find(vec[i]) == string::npos;
    }
    ok ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}