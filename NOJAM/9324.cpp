#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int size = s.size();
    int cnt[26] = {};
    bool ok = true;
    for (int i = 0; i < size; i++) {
      int tmp = s[i] - 'A';
      cnt[tmp]++;
      if (cnt[tmp] % 3 == 0) {
        if (i + 1 == size || s[i + 1] != s[i]) {
          ok = false;
          break;
        } else ++i;
      }
    }
    ok ? cout << "OK\n" : cout << "FAKE\n";
  }
  return 0;
}