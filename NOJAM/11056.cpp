#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string a, b;
  cin >> a >> b;
  int as = a.size(), bs = b.size();
  vector<vector<int>> lcs(as + 1, vector<int>(bs + 1, 0));
  for (int i = 0; i < as; i++) {
    for (int j = 0; j < bs; j++) {
      if (a[i] == b[j]) lcs[i + 1][j + 1] = lcs[i][j] + 1;
      else lcs[i + 1][j + 1] = max(lcs[i + 1][j], lcs[i][j + 1]);
    }
  }
  cout << as + bs - lcs[as][bs];
  return 0;
}