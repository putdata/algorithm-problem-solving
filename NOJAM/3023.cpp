#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c; cin >> r >> c;
  string s[r * 2];
  for (int i = 0; i < r; i++) {
    string tmp, revTmp;
    cin >> tmp;
    revTmp = tmp;
    reverse(revTmp.begin(), revTmp.end());
    s[i] = s[r * 2 - i - 1] = tmp + revTmp;
  }
  int x, y; cin >> x >> y;
  s[x - 1][y - 1] = s[x - 1][y - 1] == '.' ? '#' : '.';
  for (int i = 0; i < 2 * r; i++) cout << s[i] << '\n';
  return 0;
}