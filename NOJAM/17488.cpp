#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  vector<int> limit(m), vec[m];
  bool stu[n][m]; memset(stu, 0, sizeof(stu));
  for (int i = 0; i < m; i++) cin >> limit[i];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < n; j++) {
      while (1) {
        int x; cin >> x;
        if (x == -1) break;
        vec[x - 1].push_back(j);
      }
    }
    for (int j = 0; j < m; j++) {
      if (vec[j].size() <= limit[j]) {
        limit[j] -= vec[j].size();
        for (auto it : vec[j]) stu[it][j] = 1;
        vec[j].clear();
      }
    }
  }
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < m; j++) if (stu[i][j]) {
      cnt++;
      cout << j + 1 << ' ';
    }
    if (!cnt) cout << "망했어요";
    cout << '\n';
  }
  return 0;
}