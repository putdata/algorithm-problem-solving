#include <bits/stdc++.h>
using namespace std;

int main() {
  int cnt[50][26] = {};
  int n, m; cin >> n >> m;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    for (int j = 0; j < m; j++)
      cnt[j][s[j] - 'A']++;
  }
  int correct = 0;
  for (int i = 0; i < m; i++) {
    int maxi = -1e9, idx;
    for (int j = 0; j < 26; j++) {
      if (cnt[i][j] > maxi) {
        maxi = cnt[i][j];
        idx = j;
      }
    }
    correct += maxi;
    cout << char(idx + 'A');
  }
  cout << '\n' << n * m - correct;
  return 0;
}