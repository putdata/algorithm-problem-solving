#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int a, b, c; cin >> a >> b >> c;
      int I = 2126 * a + 7152 * b + 722 * c;
      if (I < 510000) cout << '#';
      else if (510000 <= I && I < 1020000) cout << 'o';
      else if (1020000 <= I && I < 1530000) cout << '+';
      else if (1530000 <= I && I < 2040000) cout << '-';
      else cout << '.';
    }
    cout << '\n';
  }
  return 0;
}