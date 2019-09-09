#include <bits/stdc++.h>
using namespace std;

// 구간합, 인덱스, 다음비트
tuple<long long, int, int> chk[1 << 20];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, h; cin >> n >> h;
  vector<vector<int>> adj(n);
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    for (int j = 0; j < n; j++) {
      if (s[j] == '1') adj[i].push_back(j);
    }
  }
  long long ans = adj[0].size();
  int bit = 0, idx = 1;
  for (int i = 0; i < adj[0].size(); i++) bit |= 1 << adj[0][i];
  chk[bit] = {0, 1, 0};
  while (--h) {
    int newBit = 0;
    long long melon = 0;
    for (int i = 0; i < n; i++) {
      for (auto it : adj[i]) {
        if (bit & (1 << i)) {
          melon++;
          newBit & (1 << it) ? newBit &= ~(1 << it) : newBit |= 1 << it;
        } else melon += 2;
      }
    }
    ans += melon;
    if (get<1>(chk[newBit])) {
      auto [x, y, z] = chk[bit];
      auto [px, py, pz] = chk[newBit];
      ans += (x + melon - px) * (long long) (--h / (idx - py + 1));
      int remain = h % (idx - py + 1);
      for (int i = 0; i < remain; i++) {
        ans += get<0>(chk[pz]) - px;
        px = get<0>(chk[pz]);
        pz = get<2>(chk[pz]);
      }
      break;
    }
    get<2>(chk[bit]) = newBit;
    chk[newBit] = {get<0>(chk[bit]) + melon, ++idx, 0};
    bit = newBit;
  }
  cout << ans;
  return 0;
}