#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string a, b;
  cin >> a >> b;
  int as = a.size(), bs = b.size();
  vector<vector<int>> lcs(as + 1, vector<int>(bs + 1, 0));
  for (int i = 1; i <= as; i++) {
    for (int j = 1; j <= bs; j++) {
      if (a[i - 1] == b[j - 1]) lcs[i][j] = lcs[i - 1][j - 1] + 1;
      else lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
    }
  }
  int i = as, j = bs;
  string ans = "";
  while (lcs[i][j] != 0) {
    if (lcs[i][j] == lcs[i][j - 1]) --j;
    else if (lcs[i][j] == lcs[i - 1][j]) --i;
    else {
      ans = a[i - 1] + ans;
      --i; --j;
    }
  }
  cout << lcs[as][bs] << "\n" << ans;
  return 0;
}