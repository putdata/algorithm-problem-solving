#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int h, w; cin >> h >> w;
    string s;
    for (int i = 0; i < h; i++) {
      cin >> s;
      reverse(s.begin(), s.end());
      cout << s << '\n';
    }
  }
  return 0;
}